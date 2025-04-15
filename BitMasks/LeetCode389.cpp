#include <bits/stdc++.h>
using namespace std;
class Solution
{
      public:
      char findTheDifference(string s, string t)
      {
            int XOR = 0;
            for(char i : s) XOR ^= i;
            for(char i : t) XOR ^= i;
            return XOR;
            /* 
            int sumS = 0, sumT = 0;
            for(char i : s) sumS += i;
            for(char i : t) sumT += i; 

            return sumT - sumS; 
            */
      }
};

int main()
{
      Solution s;
      cout<<s.findTheDifference("a", "aa");
}