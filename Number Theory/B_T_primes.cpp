#include <bits/stdc++.h>
#define smurf ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

const int MAX = 1e6 + 1;
vector<bool> isPrime(MAX, true);

void sieve() {
      isPrime[0] = isPrime[1] = false;
      for (int i = 2; i * i < MAX; i++) {
            if (isPrime[i]) {
                  for (int j = i * i; j < MAX; j += i) {
                        isPrime[j] = false;
                  }
            }
      }
}

int main() {
      smurf;
      sieve();

      int n; cin >> n;
      while (n--) {
            long long x; cin >> x;
            long long root = sqrtl(x); // use sqrtl for long long

            if (root * root == x && isPrime[root]) {
            cout << "YES\n";
            } else {
            cout << "NO\n";
            }
      }
}
