/*
SOLUTION 1
      Time: 0:18:00
      Runtime: 61ms
      Link: https://codeforces.com/problemset/problem/1899/A
      Complexity: O(t)
      Space Complexity: O(1)

SOLUTION 2
      Runtime: 46ms
      Complexity: O(t)
      Space Complexity: O(1) 
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
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
void switchTurn(bool &a)
{
      a = (a == true ? false : true);
}
void solve()
{
      int n; cin>>n;
      int moves = 10;
      bool turn = true; //Vanya = true, Vova = false
      while(moves--)
      {
            switch(turn)
            {
                  case true:
                  if((n - 1) % 3 == 0)
                  {
                        break;
                  }
                  else if((n + 1) % 3 == 0)
                  {
                        break;
                  }
                  switchTurn(turn);
                  break;

                  case false:
                  if((n - 1) % 3 == 0)
                  {
                        n++;
                  }
                  else
                  {
                        n--;
                  }
            }
      }

      if(turn)
      {
            cout<<"First"<<endl;
      }
      else
      {
            cout<<"Second"<<endl;
      }
}

void solve2()
{
      int n; cin>>n;
      if(n % 3 == 0)
      {
            cout<<"Second"<<endl;
      }
      else
      {
            cout<<"First"<<endl;
      }
}

int main()
{
      smurf;
      int t; cin>>t;
      while(t--)
      {
            //solve();
            solve2();
      }
}