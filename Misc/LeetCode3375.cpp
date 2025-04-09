#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
      public:
            int minOperations(vector<int>& nums, int k) {
                  unordered_set<int> numbers;
                  for(int i : nums){
                        if(i > k){
                              numbers.insert(i);
                        }
                        else if(i < k){
                              return -1;
                        }
                  }
                  return numbers.size();
            }
      };

int main(){
      Solution s;
      vector<int> arr = {1};
      cout<<s.minOperations(arr, 1);
}