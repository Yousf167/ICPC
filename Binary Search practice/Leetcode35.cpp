#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      int searchInsert(vector<int>& nums, int target)
      {
            if(target > *nums.rbegin())
            {
                  return nums.size();
            }
            else if(target < nums[0])
            {
                  return 0;
            }
            else
            {
                  int l = 0, r = nums.size() - 1;
                  int m; 
                  while (l <= r)
                  {
                        m = l + (r - l) / 2;
                        if(nums[m] == target)
                        {
                              return m;
                        }
                        else if(nums[m] < target)
                        {
                              l = m + 1;
                        }
                        else
                        {
                              r = m - 1;
                        }
                  }
                  return l;
            } 
      }
};

int main()
{
      Solution s;
      vector<int> v{1,3,5,6};
      cout<<s.searchInsert(v, 5)<<endl;
      cout<<s.searchInsert(v, 2)<<endl;
      cout<<s.searchInsert(v, 7)<<endl;
}