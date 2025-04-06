/*
Time: 
Runtime: 
Link: https://leetcode.com/problems/binary-watch/
Complexity: 
Space Complexity: 
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
      public:
            vector<string> readBinaryWatch(int turnedOn) {
                  vector<string> times;
                  for(int h = 0; h < 12; h++)
                        for(int m = 0; m < 60; m++){
                              int countOnesH = bitset<4>(h).count();
                              int countOnesM = bitset<6>(m).count();
                              if(countOnesH + countOnesM == turnedOn){
                                    times.push_back(to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m));
                              }
                        }
                  return times;
            }
};