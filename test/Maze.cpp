#include <bits/stdc++.h>
using namespace std;
#include <vector>
using namespace std;

vector<vector<char>> maze = 
{
      {' ', ' ', ' ', ' '},
      {' ', ' ', ' ', ' '},
      {' ', ' ', ' ', ' '},
      {' ', ' ', ' ', ' '},

};
/*
{
    {' ',' ',' ','*',' ',' '},
    {' ','*',' ','*',' ','*'},
    {' ','*',' ',' ',' ',' '},
    {' ','*','*',' ','*',' '},
    {' ',' ',' ',' ','*',' '},
    {'*','*','*',' ','*',' '}
};
*/
 
void printMaze() {
      for (auto i : maze) 
      {
            for (auto j : i) 
            {
                  cout << (j == ' ' ? "x " : "* ");  
            }
            cout << '\n';
      }
}

void findPaths(const vector<vector<char>>& maze, vector<vector<bool>>& visited, 
               int x, int y, int& ans, vector<vector<int>>& path)
{
      if (x < 0 || x >= maze.size() || y < 0 || y >= maze[0].size()) return;
      if (maze[x][y] == '*' || visited[x][y]) return;

      visited[x][y] = true;
      path[x][y] = true;

      if (x == maze.size() - 1 && y == maze[0].size() - 1) 
      {
            ans++;
            // Print the current path
            
            for (auto row : path) 
            {
                  for (auto element : row) 
                  {
                        cout << (element ? "x " : "* ");
                  }
                  cout << endl;
            }
            cout << endl;
            
            visited[x][y] = false;
            path[x][y] = false;
            return;
      }

      findPaths(maze, visited, x - 1, y, ans, path); // Up
      findPaths(maze, visited, x + 1, y, ans, path); // Down
      findPaths(maze, visited, x, y - 1, ans, path); // Left
      findPaths(maze, visited, x, y + 1, ans, path); // Right

      visited[x][y] = false;
      path[x][y] = false;
}

int main() {
      cin.tie(0); cout.tie(0);
      vector<vector<int>> path(maze.size(), vector<int>(maze[0].size(), false));
      printMaze();
      cout<<"-------------------------------------"<<endl;
      int ans = 0;
      vector<vector<bool>> visited(maze.size(), vector<bool>(maze[0].size(), false));
      findPaths(maze, visited, 0, 0, ans, path);
      cout << "Total paths: " << ans << endl;
      return 0;  
}
