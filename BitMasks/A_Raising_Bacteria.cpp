#include <bitset>
#include <iostream>
using namespace std;
int main()
{
      int n;
      cin>>n;
      auto ans = bitset<32>(n);
      cout<<ans.count()<<endl;
}