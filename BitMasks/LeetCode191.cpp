#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
            int hammingWeight(int n) {
                  auto num = bitset<32>(n);
                  return num.count();
            }
      };