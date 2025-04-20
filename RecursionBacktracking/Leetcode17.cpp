#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      const map<int, string> combinations
      {
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"},
      };
      vector<string> ans;
      vector<string> generate(vector<string>& ans, int numIndex1 = 0, int letterIndex1 = 0, int numIndex2 = 0, int letterIndex2 = 0)
      {
            if(letterIndex1 == 3) return ans;
            if(letterIndex1 <= 2 && letterIndex2 + 1 <= 2)
            {
                  ans.push_back(to_string(combinations.at(numIndex1)[letterIndex1]) + to_string(combinations.at(numIndex2)[letterIndex2 + 1]));
            }
      }
      vector<string> letterCombinations(string)
      {

      }
};