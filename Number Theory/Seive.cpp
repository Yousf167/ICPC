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


const int n = 1e7 + 5;
bool nums[n];

void makesieve()
{
      for(int i = 0; i < n; i++)
      {
            nums[i] = true;
      }
      nums[0] = nums[1] = false;
      for(long long i = 2; i < n; i++)
      {     
            if(nums[i])
            {
                  for(long long j = 1ll * i * i; j < n; j+=i)
                  {
                        nums[j] = false;
                  }
            }
      }
}

map<int, int> factorize(ll n)
{
      map<int, int> factors;
      while(n % 2 == 0)
      {
            factors[2]++;
            n /= 2;
      }
      for(ll i = 3; i*i <= n; i+=2)
      {
            while(n % i == 0)
            {
                  factors[i]++;
                  n /= i;
            }
      }
      if(n != 1)
      {
            factors[n]++;
      }
      return factors;
}

int main()
{
      smurf;
      /* 
      makesieve();
      for(int i = 0; i < n/1000; i++)
      {
            if(nums[i]) cout<<i<<endl;
      }
      */
      /* 
      int x = 100;
      for(int i = 1; i*i <= x; i++)
      {
            if(x % i == 0) 
                  cout<<i<<"\n";
            else
                  cout<<i<<" "<<(double)x/i<<"\n";
      }
      */

      int n = 2;
      while(n <= 100)
      {
            auto a = factorize(n);
            cout<<"Factors of "<<n<<endl;
            for(auto i : a)
            {
                  cout<<"\t"<<i.first<<", count of factor: "<<i.second<<endl;
            }
            cout<<"\n";
            n++;
      }
}