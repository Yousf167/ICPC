/*
Time: 01:10:09
Runtime: 124ms
Link: https://codeforces.com/problemset/problem/1829/D
Complexity: O(log(n))
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

/* void solve(int n, int m, bool& flag){
      if(n == m && m == 1) flag = true;
      for(int i = 1; i < n; i++){
            if(i * 3 == n){
                  if(i * 2 == m || i == m){
                        flag = true;
                        return;
                  }
                  else{
                        solve(i, m, flag);
                        solve(i * 2, m, flag);
                        break;
                  }
            }
      }
} */
bool solve(ll n, ll m) {
      if (n == m) return true;
      if (n < m || n % 3 != 0) return false;
      return solve(n / 3, m) || solve(2 * n / 3, m);
  }
  


int main()
{
      smurf;
      int t;
      cin>>t;
      while(t--){
            bool flag = false;
            int m, n; cin>>n>>m;
            bool ans = solve(n, m);
            ans ? cout<<"YES"<<endl : cout<<"NO"<<endl;
      }
}