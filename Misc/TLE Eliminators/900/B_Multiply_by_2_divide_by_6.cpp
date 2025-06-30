#include <iostream>
using namespace std;
int main()
{
      long long t;
      cin>>t;
      while(t--)
      {
            long long n;
            cin>>n;
            long long three = 0;
            long long two = 0;
            while(n > 0 && n % 3 == 0)
            {
                  three++;
                  n /= 3;
            }
            while(n > 0 && n % 2 == 0)
            {
                  two++;
                  n /= 2;
            }
            if(n > 1 || two > three)
            {
                  cout<<-1<<endl;
            }
            else
            {
                  cout<<three + (three - two)<<endl;
            }
      }
}