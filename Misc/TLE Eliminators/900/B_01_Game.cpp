#include <iostream>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            string s;
            cin>>s;
            int count0 = 0;
            int count1 = 0;
            
            if(s.size() == 1)
            {
                  cout<<"NET"<<endl;
                  continue;
            }
            
            for(int i = 0; i < s.length(); i++)
            {
                  if(s[i] == '0') 
                        count0++;
                  else
                        count1++;
            }
            
            int deletions = min(count0, count1);
            cout<<((deletions % 2 == 0) ? "NET" : "DA")<<endl;
      }
}