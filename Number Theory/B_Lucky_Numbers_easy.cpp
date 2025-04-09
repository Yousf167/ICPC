/*
Time: 
Runtime: 
Link: 
Complexity: 
Space Complexity: 
*/
#include <bits/stdc++.h>
using namespace std;
#define smurf    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)

void solve(int& n){
      for(int i = n; i < 2 * n; i++){
            int count4 = 0;
            int count7 = 0;
            bool isSuperLucky = true;
            string stringI = to_string(i);
            for(auto j : stringI){
                  if(j != '4' && j != '7'){
                        isSuperLucky = false;
                        break;
                  }
                  else if(j == '4'){
                        count4++;
                  }
                  else{
                        count7++;
                  }
            }
            if(!isSuperLucky){
                  continue;
            }
            if(count4 == count7){
                  cout<<i<<endl; 
                  return;
            } 
      }
}

int main()
{
      smurf;
      int n;
      cin>>n;
      solve(n);
}