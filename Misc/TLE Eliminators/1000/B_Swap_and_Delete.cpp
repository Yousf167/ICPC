#include <iostream>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            string s, v;
            cin>>s;
            
            if(s.size() == 1)
            {
                  cout<<1<<endl;
                  continue;
            }
            
            int s0 = 0;
            int s1 = 0;
            for(char i : s)
            {
                  (i == '0') ? s0++ : s1++;
            }
            
            if(s0 == s.size() || s0 == 0)
            {
                  cout<<s.size()<<endl;
                  continue;
            }

            
            for(char i : s)
            {
                  if(i == '1' && s0 > 0)
                  {
                        v += "0";
                        s0--;
                  }
                  else if(i == '1' && s0 <= 0 && s1 > 0)
                  {
                        v += "1";
                        s1--;
                  }
                  else if(i == '0' && s1 > 0)
                  {
                        v += "1";
                        s1--;
                  }
                  else if(i == '0' && s1 <= 0 && s0 > 0)
                  {
                        v += "0";
                        s0--;
                  }
            }

            int start = 0;
            while(s[start] != v[start]) start++;
            
            cout<<s.size() - start<<endl;
      }
}