#include <iostream>
using namespace std;
/*
Time: 
Runtime: 
Link: 
Complexity: 
Space Complexity: 
*/
class Solution {
      public:
/*             bool isPalindrome(int x) {
                  if(x < 0) return false;
                  if(x < 10) return true;
                  if(x % 10 == 0) return false;
                  long long reverse = 0;
                  long long p = 1000000000; // Adjusted to match the integral type
                  int temp = x;
                  while(temp != 0){
                        int t = temp / 10; 
                        t *= 10;
                        reverse += (temp - t) * p;
                        temp /= 10;
                        p /= 10;
                  }
                  while(reverse % 10 == 0){
                        reverse /= 10;
                  }
                  if(reverse == x)
                  {
                        return true;
                  }
                  return false;
            } */


            bool isPalindrome(int x) {
                  if (x < 0 || (x % 10 == 0 && x != 0)) return false;
                  int reversed = 0;
                  while (x > reversed) {
                  reversed = reversed * 10 + x % 10;
                  x /= 10;
                  }
                  return x == reversed || x == reversed / 10;
            }     
      };


int main()
{
      Solution s;
      cout<<s.isPalindrome(121)<<endl;
}