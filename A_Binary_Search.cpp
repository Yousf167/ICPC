/*
Solution Time: 0:23:42
Submission time: 437 ms 
Complexity: O(n + k log n)
Problem: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
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


bool binsearch(int arr[], int n, int target)
{
      int l = 0, r = n - 1;
      bool found = false;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (arr[mid] == target)
            {
                  found = true;
                  break;
            }
            else if (arr[mid] < target)
            {
                  l = mid + 1;
            }
            else
            {
                  r = mid - 1;
            }
      }
      return found;
}

int main()
{
      int n, k;
      cin >> n >> k;
      
      int arr[n];
      int queries[k]; 

      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      for (int i = 0; i < k; i++)
      {
            cin >> queries[i];
      }


      for(int i = 0; i < k; i++)
      {
            int x = queries[i];
            if (binsearch(arr, n, x))
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
      }
}