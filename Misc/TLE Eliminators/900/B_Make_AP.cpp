#include <iostream>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            long a, b, c;
            cin>>a>>b>>c;
            long long A = 2*b - c;
            long long B = (a+c)/2;
            long long C = 2*b - a;
            bool ans = A / a > 0 && A % a == 0 || 
                       B / b > 0 && B % b == 0 && (c-a) % 2 == 0 || 
                       C / c > 0 && C % c == 0;
            cout<<(ans ? "YES" : "NO")<<endl;
      }
}