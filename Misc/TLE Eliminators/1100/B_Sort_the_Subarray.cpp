#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long n;
            cin>>n;

            vector<long long> a(n);
            vector<long long> a2(n);
            
            for(auto& i : a)
            {
                  cin>>i;
            }
            for(auto& i : a2)
            {
                  cin>>i;
            }

            int start = 0;
            int end = n - 1;
            while(a[start] == a2[start]) start++;
            while(a[end] == a2[end]) end--;


            while(start - 1 >= 0)
            {
                  if(a2[start - 1] <= a2[start]) 
                        start--;
                  else
                        break;      
            }
            while(end + 1 < n)
            {
                  if(a2[end] <= a2[end+1]) 
                        end++;
                  else
                        break;
            }

            cout<<start+1<<" "<<end+1<<endl;
      }
}