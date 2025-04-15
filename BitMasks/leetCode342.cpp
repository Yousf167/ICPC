#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
            bool isPowerOfFour(int n) 
            {
                  return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
                  /*                   
                  if(n <= 0) return false;
                  auto x = bitset<32>(n);
                  uint8_t leftMost1;
                  for(int i = 31; i >= 0; i--)
                  {
                        if(x[i] == 1)
                        {
                              leftMost1 = i;
                              break;
                        }
                  }
                  return (!(leftMost1 % 2) && x.count() == 1); 
                  */
            }
      };

int main()
{
      Solution s;
      cout<<s.isPowerOfFour(-2147483648);
}