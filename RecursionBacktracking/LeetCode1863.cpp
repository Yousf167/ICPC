/*
Time: 0:53:27
Runtime: 43ms;
Link: https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/
Complexity: O(N * 2^N)
Space Complexity: O(N * 2^N)
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
      public:
            void getSubsetsRec(vector<int>& nums, int i, vector<vector<int>>& res, vector<int>& sub){
                  if(i == nums.size()){
                        res.push_back(sub);
                        return;
                  }

                  sub.push_back(nums[i]);
                  getSubsetsRec(nums, i + 1,res, sub);

                  sub.pop_back();
                  getSubsetsRec(nums, i + 1, res, sub);
            }

            vector<vector<int>> getSubs(vector<int>& nums){
                  vector<vector<int>> res;
                  vector<int> sub;
                  getSubsetsRec(nums, 0, res, sub);
                  return res;
            }

            int subsetXORSum(vector<int>& nums) {
                  vector<vector<int>> res = getSubs(nums);
                  int sum = 0;
                  for(auto i : res){
                        if(i.empty()) continue;
                        int xorSum = 0;
                        for(int j : i){
                              xorSum = xorSum xor j;
                        }
                        sum += xorSum;
                  }
                  return sum;
            }
      };

int main()
{
      Solution s;
      vector<int> n{1,2,3};
      auto res = s.getSubs(n);
      for(auto i : res)
      {
            for(auto j : i)
            {
                  cout<<j<<" ";
            }
            cout<<endl;
      }
}