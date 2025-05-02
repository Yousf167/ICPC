#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      vector<int>plusOne(vector<int>& digits)
      {
            int carry = 0;
            digits[digits.size() - 1]++;
            for(int i = digits.size() - 1; i >= 0; i--)
            {
                  digits[i] += carry;
                  carry = 0;
                  if(digits[i] >= 10)
                  {
                        digits[i] = 0;
                        carry = 1;
                  }
                  if(!carry)
                  {
                        return digits;
                  }
            }
            if(digits[0] >= 10 || !digits[0])
            {
                  digits[0] %= 10;
                  digits.insert(digits.begin(), 1);
            }
            return digits;
      }
};

int main()
{
      Solution s;
      vector<int> v{9,9,9};
      v = s.plusOne(v);
      for(auto i : v)
      {
            cout<<i<<" ";
      }
}