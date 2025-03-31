#include <iostream>
using namespace std;
int main()
{
      int t;
      cin >> t;
      string out;
      while(t--)
      {
            int n, k;
            cin >> n >> k;
            if(n == 1) 
            {
                  out.append(to_string(1));
                  continue;
            }
            else if(n % 2 == 1)
            {
                  out.append(to_string(1 + ((n - k) + k - 2)/(k-1)) + "\n");
            }
            else
            {
                  out.append(to_string((n + k - 2) / (k - 1)) + "\n");
            }
      }
      cout << out;
}