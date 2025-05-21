#include <iostream>
#include <math.h>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            long long n; cin>>n;      
            if(n % 2 || n < 4)
            {
                  cout<<-1<<endl;
            }
            else
            {
                  long long minn = (n % 6 == 0) ? n / 6 : n / 6 + 1;
                  long long maxx = n / 4;
                  cout<<minn<<" "<<maxx<<endl;
            } 
      }
}