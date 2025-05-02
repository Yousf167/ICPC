/*
Solution Time: 0:53:31
Runtime: 2 ms ??
Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
Complexity: O(m + n)
*/
#include <vector>
#include <iostream>
using namespace std;

class Solution 
{
      public:
            vector<int> merge(vector<int>& nums1, vector<int>& nums2)
            {
                  vector<int> ans;
                  int i = 0, j = 0;
                  while(i < nums1.size() && j < nums2.size())
                  {
                        if(nums1[i] < nums2[j])
                        {
                              ans.push_back(nums1[i]);
                              i++;
                        }
                        else
                        {
                              ans.push_back(nums2[j]);
                              j++;
                        }
                  }
                  if(j >= nums2.size())
                  {
                        while(i < nums1.size())
                        {
                              ans.push_back(nums1[i]);
                              i++;
                        }
                  }
                  if(i >= nums1.size())
                  {
                        while(j < nums2.size())
                        {
                              ans.push_back(nums2[j]);
                              j++;
                        }
                  }
                  return ans;
            }


            double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
            {
                  auto merged = merge(nums1, nums2);
                  int s = merged.size();
                  double median;
                  if(s % 2 == 0)
                  {
                        int m1 = merged[s / 2];
                        int m2 = merged[s / 2 - 1];
                        median = (m1 + m2) / 2.0;
                  }
                  else
                  {
                        median = merged[(s - 1) / 2.0];
                  }
                  return median;
            }
};

int main()
{
      Solution s;
      vector<int> v1 = {1,2};
      vector<int> v2 = {3,4};
      auto v3 = s.merge(v1, v2);
      cout<<"Elements: ";
      for(auto i : v3)
      {
            cout<<i<<" ";
      }
      cout<<"\n";
      cout<<"Median: "<<s.findMedianSortedArrays(v1, v2)<<"\n";
}