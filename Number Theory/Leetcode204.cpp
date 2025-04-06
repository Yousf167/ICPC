/*
Time: 0:17:35
Runtime: 178ms
Link: https://leetcode.com/problems/count-primes/description/
Complexity: O(n * log(log(n)))
Space Complexity: O(n)
*/
class Solution 
{
      public:
            void seive(bool primes[] ,int n)
            {
                  for(long i = 0; i < n; i++)
                  {
                        primes[i] = true;
                  }
                  primes[0] = false; primes[1] = false;
                  for(long i = 2; i < n; i++)
                  {
                        if(primes[i])
                        {
                              for(long j = i * i; j < n; j += i)
                              {
                                    primes[j] = false;
                              }
                        }
                  }
            }

            int countPrimes(int n) 
            {
                  int count = 0;
                  if(n <= 1)
                  {
                        return 0;
                  }
                  bool primes[n];
                  seive(primes, n);
                  for(int i = 0; i < n; i++)
                  {
                        if(primes[i])
                        {
                              count++;
                        }
                  }
                  return count;
            }
};


#include <iostream>
using namespace std;
int main()
{
      Solution s;
      cout<<s.countPrimes(10);
}