#include <iostream>
using namespace std;
int main()
{
      int l, r; cin>>l>>r;
      int max = -1;
      for(int i = l; i <= r; i++)
      {
            for(int j = i + 1; j <= r; j++)
            {
                  int Xor = i ^ j;
                  if(max < Xor) max = Xor;
            }
      }
      cout<<max<<endl;
}