#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
            int hammingDistance(int x, int y) {
                  return bitset<32>(x ^ y).count();
            }
      };