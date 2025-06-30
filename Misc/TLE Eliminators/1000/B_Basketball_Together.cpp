#include <bits/stdc++.h>
using namespace std;
int main()
{
      long long n, d;
      cin>>n>>d;
      vector<long long> players(n);
      for(long long& i : players)
      {
            cin>>i;
      }

      sort(players.begin(), players.end());
      int frontPos = 0;
      int wins = 0;
      while(frontPos <= n)
      {
            long long Max = players[--n];
            int members = floor(d / Max + 1);
            frontPos += members - 1;
            if(frontPos > n) break;
            if(Max * members > d)
            {
                  wins++; 
            }
            else
            {
                  break;
            }
      }      
      cout<<wins<<endl;
} 