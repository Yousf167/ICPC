#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findMSB(int x) 
{
      if (x == 0) return 0;
      int msb = 0;
      while (x >>= 1) 
      {
            msb++;
      }
      return msb;
}

long long countPairs(const vector<int>& arr) 
{
      unordered_map<int, int> msbCount;
      for (int num : arr) 
      {
            int msb = findMSB(num);
            msbCount[msb]++;
      }
    
      long long result = 0;
      for (const auto& pair : msbCount) 
      {
            long long count = pair.second;
            if (count >= 2) 
            {
                  result += count * (count - 1) / 2;
            }
      }
      return result;
}

int main() 
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;
      while (t--) 
      {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; ++i) 
            {
                  cin >> a[i];
            }
            cout << countPairs(a) << '\n';
      }
      return 0;
}