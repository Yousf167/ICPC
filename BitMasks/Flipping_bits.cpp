/*
Time: 
Runtime: 
Link: 
Complexity: 
Space Complexity: 
*/
#include <bits/stdc++.h>
using namespace std;

bitset<32> flip(int n)
{
      auto ans = bitset<32>(n);
      return ~ans;
}

/*
 0001 1
 0010 2
 0011 3
 0100 4
 0101 5
 0110 6
 0111 7
 1000 8
 1001 9 
 1010 10
 1011 11
 1100 12
 1101 13
 1110 14
 1111 15 
10000 16
10001 17
10010 18
10011 19
10100 20
10101 21 //
10110 22
10111 23
11000 24
11001 25
11010 26
11011 27
11100 28
11101 29
11110 28
11111 29 //
*/
int main()
{
      int q;
      cin >> q;
      while(q--)
      {
            int n;
            cin>>n;
            cout << flip(n).to_ulong() << endl;
      }
}