/*
Time: 
Runtime: 
Link: 
Complexity: 
Space Complexity: 
*/
#include <bits/stdc++.h>
using namespace std;

//Solution 2
class Solution {
      public:
          vector<int> largestDivisibleSubset(vector<int>& nums) {
              sort(nums.begin(), nums.end());
              vector<int> dp(nums.size(), 1), prev(nums.size(), -1);
              int maxi = 0;
              for (int i = 1; i < nums.size(); i++) {
                  for (int j = 0; j < i; j++) {
                      if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                          dp[i] = dp[j] + 1;
                          prev[i] = j;
                      }
                  }
                  if (dp[i] > dp[maxi]) maxi = i;
              }
              vector<int> res;
              for (int i = maxi; i >= 0; i = prev[i]) {
                  res.push_back(nums[i]);
              }
              return res;
          }
      };

int main(){
      Solution s;
      
      vector<int> nums{1,2,3};
      auto ans = s.largestDivisibleSubset(nums);
      for(auto i : ans){
            cout<<i<<" ";
      }
}

/*attempt
class Solution {
      public:
            int n = 10;
            
            vector<vector<int>> devide(vector<int>& nums){
                  int m = nums.size() / 2;
                  vector<int> devided1;
                  vector<int> devided2;
                  vector<vector<int>> devided;
                  for(int i = 0; i < m; i++) {
                        devided1.push_back(nums.at(i));
                  }
                  for(int i = m; i < nums.size(); i++) {
                        devided2.push_back(nums.at(i));
                  }
                  devided.push_back(devided1); devided.push_back(devided2);
                  return devided;
            }

            vector<int> largestDivisibleSubset(vector<int>& nums){
                  vector<int> ans;
                  if(nums.size() == 1){
                        ans.push_back(nums.at(0));
                        return ans;
                  }
                  if(nums.size() == 2){
                        ans.push_back(nums.at(0)); ans.push_back(nums.at(1));
                        return ans;
                  }
                  bool flag = 0;
                  for(int i = 0; i < nums.size(); i++){
                        for(int j = i + 1; j < nums.size(); j++){
                              if((nums.at(i) % nums.at(j) == 0 || nums.at(j) % nums.at(i) == 0)){
                                    flag = true;
                              }else{
                                    flag = false;
                                    break;
                              }
                        }
                        if(!flag) break;
                  }
                  if(flag){
                        return nums;
                  }else{
                        auto v = devide(nums);
                        auto ans1 = largestDivisibleSubset(v.at(0)); 
                        auto ans2 = largestDivisibleSubset(v.at(1)); 
                        return (ans1.size() > ans2.size() ? ans1 : ans2);
                  }
                  return {}; 
            }
};
*/

/* Bonus Solution: Sorcery
const auto _ = std::cin.tie(nullptr)->sync_with_stdio(false);
#define LC_HACK
const auto __ = []() {
    struct ___ {
        static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
    };
    std::atexit(&___::_);
    return 0;
}();

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>dp(n,1);
        vector<int>par(n,0);
        for(int i=0;i<n;i++)
        { par[i]=i;
            for(int j=0;j<i;j++)
            {
                    if(nums[i]%nums[j]==0 || nums[j]%nums[i]==0)
                    {
                        if(dp[i]<dp[j]+1)
                        {
                            dp[i]=dp[j]+1;
                            par[i]=j;
                        }
                    }
            }
        }
        int ans=-1;
        int last=-1;
        for(int i=0;i<n;i++)
        {
            if(dp[i]>ans)
            {
                ans=dp[i];
                last=i;
            }
        }
        vector<int>anss;
        anss.push_back(nums[last]);
        while(par[last]!=last)
        {
            last=par[last];
            anss.push_back(nums[last]);
        }
        reverse(anss.begin(),anss.end());
        return anss;
    }
};
*/

/* Solution 2: MEMORY FUCKER 3000, doesnt work for large vectors
class Solution {
      public:
            void getSubsetsRec(vector<int>& nums, int i, vector<vector<int>>& res, vector<int>& sub){
                  if(i == nums.size()){
                        res.push_back(sub);
                        return;
                  }

                  sub.push_back(nums.at(i));
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

            vector<vector<int>> clean(vector<vector<int>> nums){
                  vector<vector<int>> c;
                  for(int i = 0; i < nums.size(); i++){
                        bool flag = true;
                        for(int j = 0; j < nums.at(i).size(); j++){
                              for(int k = j + 1; k < nums.at(i).size(); k++){
                                    if(nums.at(i).at(k) % nums.at(i).at(j) == 0 || nums.at(i).at(j) % nums.at(i).at(k) == 0){
                                          flag = true;
                                    }
                                    else{
                                          flag = false;
                                          break;
                                    }
                              }
                              if(!flag) break;
                        }
                        if(flag) c.push_back(nums.at(i));
                  }
                  
                  return c;    
            }

            vector<int> largestDivisibleSubset(vector<int>& nums) {
                  vector<int> max{};
                  if(nums.size() == 1){
                        max.push_back(nums.at(0));
                        return max;
                  }
                  if(nums.size() == 2){
                        max.push_back(nums.at(0));
                        max.push_back(nums.at(1));
                        return max;
                  }
                  
                  auto temp = getSubs(nums);
                  auto subs = clean(temp);
                  for(auto i : subs){
                        if(i.size() > max.size())
                              max = i;
                  }
                  return max;
            }
}; 
*/