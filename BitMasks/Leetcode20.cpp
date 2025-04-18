#include <bits/stdc++.h>
using namespace std;
class Solution {
      public:
      
            int isValid(string s) 
            {
                  map <char, char> closedMap = {{')', '('}, {']', '['}, {'}', '{'}};
                  stack<char> opened;
                  for(char i : s)
                  {
                        if(closedMap.find(i) == closedMap.end())
                        {
                              opened.push(i);
                        }
                        else if(!opened.empty() && opened.top() == closedMap[i])
                        {
                              opened.pop();
                        }
                        else
                        {
                              return false;
                        }
                  }
                  return opened.empty();

                  /* 
                  map<char, int> count;
                  for(char i : s) count[i]++;
                  
                  return count['('] == count[')'] &&
                         count['['] == count[']'] &&
                         count['{'] == count['}']; 
                  */     
            }
      };