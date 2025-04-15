/*
Time: 
Runtime: 
Link: https://leetcode.com/problems/add-binary/
Complexity: 
Space Complexity: 
*/
#include <iostream>
using namespace std;
/*
class Solution
{
      public:
      string addBinary(string a, string b)
      {
            unsigned long long int sum = 0;
            int lA = a.length(), lB = b.length();
            for(unsigned long long int i = 0; i < lA; i++)
            {
                  sum += (a[lA - i - 1ULL] == '1' ? 1ULL : 0ULL) << i;
            }
            for(unsigned long long int i = 0; i < lB; i++)
            {
                  sum += (b[lB - i - 1ULL] == '1' ? 1ULL : 0ULL) << i;
            }
            
            string binary = "";
            do
            {
                  binary += to_string(sum % 2);
                  sum /= 2;
            }
            while(sum);

            for(int i = 0; i < binary.length() / 2; i++)
            {
                  int temp = binary[i];
                  binary[i] = binary[binary.length() - i - 1];
                  binary[binary.length() - i - 1] = temp;
            }
            return binary;
      }
};
*/
class Solution {
      public:
       string addBinary(string a, string b) {
         string ans;
         int carry = 0;
         int i = a.length() - 1;
         int j = b.length() - 1;
     
         while (i >= 0 || j >= 0 || carry) {
           if (i >= 0)
             carry += a[i--] - '0';
           if (j >= 0)
             carry += b[j--] - '0';
           ans += carry % 2 + '0';
           carry /= 2;
         }
     
         reverse(begin(ans), end(ans));
         return ans;
       }
     };
int main()
{
      Solution s;
      cout<<s.addBinary(
            "10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101",
        "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011");
}