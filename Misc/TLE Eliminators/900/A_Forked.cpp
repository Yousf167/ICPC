#include <iostream>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            int a, b, xk, yk, xq, yq;
            cin>>a>>b>>xk>>yk>>xq>>yq;
            int attX[8] = {a, a, -a, -a, b, b, -b, -b};
            int attY[8] = {b, -b, b, -b, a, -a, a, -a};
            int count = 0;
            for(int i = 0; i < 8; i++)
            {
                  int attQ[2] = {xq + attX[i], yq + attY[i]};
                  for(int j = 0; j < 8; j++)
                  {
                        int attK[2] = {xk + attX[j], yk + attY[j]};
                        if(attK[0] == attQ[0] && attK[1] == attQ[1])
                        {
                              count++;
                        }
                  }
            }
 
            cout<<count % 3<<endl;
      }
}