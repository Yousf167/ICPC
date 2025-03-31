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


ostream& operator<<(ostream& os, vi v)
{
      int size = v.size();
      os << "[";
      for (int i = 0; i < size; i++) {
            if (i > 0)
            {
                  os << ", ";
            }
            os << v[i];
      }
      os << "]";
      return os;
}


vi prefixSum(vi arr)
{
      vi ans;
      ans.push_back(arr[0]);
      int si = arr.size();
      for(int i = 1; i < si; i++)
      {
            ans.push_back(arr[i] + ans[i - 1]);
      }
      return ans;
}

vi partialSum(vi arr, int num, int start, int end)
{
      if (start < 0 || end < 0 || start >= arr.size() || end >= arr.size()) 
      {
            throw runtime_error("Invalid positions: start or end out of bounds");
      }
      if (start > end) 
      {
            throw runtime_error("Invalid positions: start cannot be greater than end");
      }

      vi ans = arr;

      ans.at(start) += num;
      if (end + 1 < arr.size()) 
      {
            ans.at(end + 1) -= num;
      }

      // Update the prefix sum only for the affected range
      for (int i = start + 1; i < arr.size(); ++i) 
      {
            ans[i] += ans[i - 1];
      }

      return ans;
}

int main()
{
      smurf;
      vi arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

      try 
      {
            auto ans = prefixSum(arr);
            cout << "Prefix Sum: " << ans << "\n";
            cout << "Original Array: " << arr << "\n\n";

            auto ans2 = partialSum(arr, 4, 0, 3);
            cout << "Partial Sum: " << ans2 << "\n";
            cout << "Original Array: " << arr << "\n\n";

            // Additional test cases
            auto ans3 = partialSum(arr, 5, 2, 5);
            cout << "Partial Sum (Test 2): " << ans3 << "\n";

            auto ans4 = partialSum(arr, -3, 1, 7);
            cout << "Partial Sum (Test 3): " << ans4 << "\n";
      } 
      catch (const runtime_error& e) 
      {
            cout << "Error: " << e.what() << "\n";
      }
}