#include <iostream>
using namespace std;
int main()
{
      int a, b, t;
      cin>>t;
      while(t--)
      {
            cin>>a>>b;
            int num = a | b;
            cout<<((a ^ num) + (b ^ num))<<endl;
      }
}