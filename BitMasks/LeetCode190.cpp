#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
            uint32_t reverseBits(uint32_t n) {
                  auto num = bitset<32>(n);
                  int size = 32;
                  uint32_t reverse = 0;
                  for(int i = 0; i < size; i++)
                  {
                        reverse += num[i] << (size - i - 1);
                  }
                  return reverse;
            }
      };


int main()
{
      Solution s;
      cout<<s.reverseBits(bitset<32>("00000010100101000001111010011100").to_ullong())<<endl;
      cout<<bitset<32>("00000010100101000001111010011100").to_ulong();
}