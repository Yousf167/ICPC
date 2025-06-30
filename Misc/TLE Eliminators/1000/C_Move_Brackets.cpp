#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            vector<char> s(n);
            for(char& c : s) cin>>c;

            int open = 0, closed = 0, operations = 0;

            for(char c : s)
            {
                  if(c == '(') 
                  {
                        open++;

                  }
                  else
                  {
                        closed++;
                  } 

                  if(open < closed) 
                  {
                        operations++;
                        open = 0;
                        closed = 0;
                  }
            }

            cout<<operations<<endl; 
      }
}