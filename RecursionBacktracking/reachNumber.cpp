#include <bits/stdc++.h>
using namespace std;


void reachNumber(int start, int end, int &count)
{
      if(start == end)
      {
            count++;
      }
      if(start > end)
      {
            return;
      }
      reachNumber(start + 1, end, count);
      reachNumber(start + 2, end, count);
}

int main()
{
      int c = 0;
      reachNumber(0, 20, c);
      cout<<c<<endl;
}