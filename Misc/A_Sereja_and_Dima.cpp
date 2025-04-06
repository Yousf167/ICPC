/*
Time: 0:23:25
Runtime: 77ms
Link: https://codeforces.com/problemset/problem/381/A
Complexity: O(N)
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


int pickCard(int cards[], int n, int &i, int &j)
{
      int val;
      if(cards[i] > cards[j])
      {
            val = cards[i];
            i++;
      }
      else
      {
            val = cards[j];
            j--;
      }
      return val;
}


int main()
{
      smurf;
      int n;
      cin>>n;
      int sereja = 0, dima = 0;
      int cards[n];
      for(int i = 0; i < n; i++)
      {
            cin>>cards[i];
      }
      
      int i = 0, j = n - 1;
      bool turn = true; //sereja
      while(i <= j)
      {
            if(turn == true)
            {
                  sereja += pickCard(cards, n, i, j);
                  turn = false;
            }
            else
            {
                  dima += pickCard(cards, n, i, j);
                  turn = true;
            }
      }

      cout<<sereja<<" "<<dima;
}