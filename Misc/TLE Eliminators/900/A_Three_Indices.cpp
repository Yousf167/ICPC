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
            int arr[n];
            vector<int> priority;
            for(int& i : arr)
            {
                  cin>>i;
                  priority.push_back(i);
            }

            int i, j, k;
            bool found = false;
            sort(priority.begin(), priority.end());
            while(!priority.empty())
            {     
                  int num = priority[priority.size() - 1];
                  priority.pop_back();
                  
                  j = 0;
                  while(arr[j] != num)
                  {
                        j++;
                  }
                  
                  i = k = j;

                  while(arr[i] >= arr[j])
                  {
                        i--;
                        if(i < 0)
                        {
                              break;
                        }
                  }
                  while(arr[k] >= arr[j])
                  {
                        k++;
                        if(k == n)
                        {
                              break;
                        }
                  }

                  if(i >= 0 && k < n)
                  {
                        found = true;
                        break;
                  }
            }

            if(found)
            {
                  cout<<"YES\n";
                  cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
            }
            else
            {
                  cout<<"NO"<<endl;
            }
      }
}