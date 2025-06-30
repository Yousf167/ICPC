#include<iostream>
using namespace std;


int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n; char c;
            cin>>n>>c;
            string s;
            cin>>s;

            if(c == 'g')
            {
                  cout<<0<<endl;
                  continue;
            }
            s += s;
            int Max = 0;
            int g = 0;
            for(int i = 2*n - 1; i >= 0; i--)
            {
                  if(s[i] == 'g')
                  {
                        g = i;
                  }
                  if(s[i] == c)
                  {
                        Max = max(Max, g - i);
                  }
            }
            cout<<Max<<endl;
      }
}