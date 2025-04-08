/*
Time: 0:44:52
Runtime: 62ms
Link: https://codeforces.com/problemset/problem/1765/M
Complexity: 
Space Complexity: 
*/
#include <bits/stdc++.h>
using namespace std;
#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define clr(v, d) memset(v, d, sizeof(v))
#define repi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define repd(i, j, n) for (int i = (j); i >= (int)(n); --i)
#define repa(v) repi(i, 0, sz(v)) repi(j, 0, sz(v[i]))
#define rep(i, v) repi(i, 0, sz(v))
#define lp(i, cnt) repi(i, 0, cnt)
#define lpi(i, s, cnt) repi(i, s, cnt)
#define P(x) cout << #x << " = { " << x << " }\n"
#define pb push_back
#define f first
#define s second
#define MP make_pair
#define el "\n"
#define arrow "---->"
#define smurf    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)
typedef long long           ll;
typedef long double         ld;
typedef vector<int>         vi;
typedef vector<double>      vd;
typedef vector<bool>        vb;
typedef vector<long long>  vll;
typedef vector<vi>         vvi;
typedef vector<vd>         vvd;
typedef vector<string>      vs;
template <typename T, size_t N, typename = std::enable_if_t<!std::is_same<std::decay_t<T>, char>::value>>
ostream& operator<<(ostream& os, const T (&arr)[N]) {
    os << "[";
    for (size_t i = 0; i < N; ++i) {
        if (i > 0)
            os << ", ";
        os << arr[i];
    }
    os << "]";
    return os;
}


#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
      if (n <= 1) return false;
      for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
      }
      return true;
}

void find_min_lcm_pair(int n) {
      if (is_prime(n)) {
            cout << 1 << " " << n - 1 << endl;
      } else {
            for (int i = 2; i * i <= n; i++) {
                  if (n % i == 0) {
                        int a = n / i;
                        int b = n - a;
                        cout << a << " " << b << endl;
                        return;
                  }
            }
      }
}

int main() {
      int t;
      cin >> t;
      while (t--) {
            int n;
            cin >> n;
            find_min_lcm_pair(n);
      }
      return 0;
}


/* 
int lcm(int a, int b){
      return (a * b) / gcd(a, b);
}

pair<int, int> solve(int n){
      int min = INT_MAX - 1;
      pair<int,int> minPair;
      for(int i = 1; i <= n / 2; i++){
            int num1 = i;
            int num2 = n - i;
            int LCM = lcm(num1, num2);
            if(LCM < min){
                  min = LCM;
                  minPair = {num1, num2};
            }
      }
      return minPair;
}


int main()
{
      smurf;
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            auto ans = solve(n);
            cout<<ans.first<<" "<<ans.second<<endl;
      }
} */