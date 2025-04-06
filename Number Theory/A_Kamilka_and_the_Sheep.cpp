/*
Link: https://codeforces.com/problemset/problem/2092/A
Time: blash ne3ed XD
complexity: O(t * n * log(n))
runtime: 66ms
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


void solve()
{
      int n;
      cin>>n;
      vector<int> a(n);
      for(int i = 0; i < n; i++) cin>>a[i];
      sort(all(a));
      cout<<a[n-1] - a[0]<<endl;
}

int main()
{
      smurf;
      int t;
      cin>>t;
      while(t--)
      {
            solve();
      /*       
            int n;
            cin>>n;
            int sheep[n];
            for(int i = 0; i < n; i++)
            {
                  cin>>sheep[i];
            }

            int d = 0;
            int max = 0;
            int I = 101;
            set<int> diffs;
            for(int i = 0; i < n; i++)
            {
                  for(int j = i + 1; j < n; j++)
                  {
                        int diff = abs(sheep[i] - sheep[j]);
                        if(diff != 0)
                        {
                              diffs.insert(diff);
                        }
                  }
            }

            for(int diff : diffs)
            {
                  for(int g = 1; g*g <= diff; g++)
                  {
                        if(diff % g == 0)
                        {
                              if(max < g)
                              {
                                    max = g;
                              }
                              if(max < diff/g)
                              {
                                    max = diff/g;
                              }
                        }
                  }

            }

            cout<<max<<endl;
      */
      }
}