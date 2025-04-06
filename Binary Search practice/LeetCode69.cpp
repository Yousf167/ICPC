/*
Solution Time: 0:7:53
Runtime: 0 ms ??
Link: https://leetcode.com/problems/sqrtx
Complexity: O(Logx)
*/
#include <iostream>
using namespace std;

int sqrt(int x)
{
      if(x == 0)
      {
            return 0;
      }
      if(x == 1)
      {
            return 1;
      }
      int m;
      int l = 0;
      int r = __INT_MAX__;
      while(r >= l)
      {
            m = (r + l) / 2;
            if(m  >  x / m)
            {
                  r = m - 1 ;
            }
            else if(m == x / m)
            {
                  return m;
            }
            else
            {
                  l = m + 1;
            }
      }
      return r;
}

int main()
{
      cout<<sqrt(4)<<"\n";
}