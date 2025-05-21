#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n; cin>>n;
            map<int, int> freq;
            for(int i = 0; i < n; i++)
            {
                  int num; cin>>num;
                  freq[num]++;
            }

            int maxFreq = 0;
            for(auto i : freq)
            {
                  maxFreq = max(i.second, maxFreq);
            }

            int op = 0;
            while(maxFreq < n)
            {
                  op++;//clone
                  if(maxFreq * 2 <= n)//we dont have more than what we need
                  {
                        op += maxFreq;//swapping the highest freq with elements
                        maxFreq *= 2;//because we cloned
                  }
                  else
                  {
                        op += n - maxFreq;//swap remaining elements
                        maxFreq = n;//we now have an array with all equall numbers
                  }
            }
            cout<<op<<endl;
      }
}