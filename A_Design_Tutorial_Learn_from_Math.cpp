/*
Time: 0:51:31
Runtime: 46ms
Link: https://codeforces.com/problemset/problem/472/A
Complexity: O(N * log(log(N)))
Space Complexity: O(N)
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


void makesieve(bool nums[], int N)
{
      for(int i = 0; i < N; i++)
      {
            nums[i] = true;//prime
      }
      nums[0] = nums[1] = true;
      for(long long i = 2; i < N; i++)
      {     
            if(nums[i])
            {
                  for(long long j = 1ll * i * i; j < N; j+=i)
                  {
                        nums[j] = false;
                  }
            }
      }
}


int main()
{
      smurf;
      int N = 10e5;
      bool nums[N];
      makesieve(nums, N);
      int n; cin>>n;
      int x = 4, y = n - 4;

      if(n % 2 == 0)
      {
            if(!nums[n/2])
            {
                  cout<<n/2<<" "<<n/2;
                  return 0;
            }
      }

      for(; x <= y;)
      {
            if((nums[x] || nums[y]))
            {
                  x++;
                  y--;
                  continue;
            }
            else
            {
                  break;
            }
      }
      cout<<x<<" "<<y;
      return 0;
}
