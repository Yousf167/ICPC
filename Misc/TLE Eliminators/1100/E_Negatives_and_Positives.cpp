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
            vector<long long> a(n);
            bool foundZero = false;
            for(auto& i : a)
            {
                  cin>>i;
                  if(i == 0)
                  {
                        foundZero = true;
                  }
            }

            long long sum = 0;
            if(foundZero)
            {
                  for(auto& i : a)
                  {
                        sum += abs(i);
                  }
                  cout << sum << endl;
                  continue;
            }
            else
            {     
                  sort(a.begin(), a.end());
      
                  for(int i = 1; i < n; i+=2)
                  {
                        if(a[i] < 0 && a[i - 1] < 0)
                        {
                              a[i] = abs(a[i]);
                              a[i - 1] = abs(a[i - 1]);
                        }
                        else if(a[i] > 0 && a[i - 1] > 0)
                        {
                              break;
                        }
                        else
                        {
                              if(a[i] < abs(a[i - 1]))
                              {
                                    a[i] = -a[i];
                                    a[i - 1] = abs(a[i - 1]);
                              }
                              break;
                        }
                  }
            }
            for(auto i : a)
            {
                  sum += i;
            }
            cout<<sum<<endl;
      }
}