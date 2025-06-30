#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n;
      string s;
      cin>>n>>s;

      int i;
      bool found = false;

      for(i = 0; i + 1 < n; i++)
      {
            if(s[i] > s[i + 1])
            {
                  found = true;
                  break;
            }
      }


      if(!found)
      {
            cout<<"NO";
      }
      else
      {
            i++;
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1;
      }
      cout<<endl;
}
