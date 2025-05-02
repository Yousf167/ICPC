/*
Time: 
Runtime: 
Link: https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct/
Complexity: O(n^2) 
Space Complexity: O(1)
*/
#include <vector>
using namespace std;
class Solution {
      public:
            int minimumOperations(vector<int>& nums) {
                  int n = nums.size();
                  int count = 0;
                  for(int i = 0; i < n; i++){
                        for(int j = i + 1; j < n; j++){
                              if(nums[j] == nums[i]){
                                    count++;
                                    i = count * 3;
                                    i--;
                                    break;   
                              }
                        }
                  }
                  return count;
            }
}; 

