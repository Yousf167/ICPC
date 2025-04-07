/*
Time: m7sbt4
Runtime: 62ms
Link: https://codeforces.com/problemset/problem/476/B
Complexity: O(2^(count('?')))
Space Complexity: O(2^(count('?')))
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

map<string, int> subsets;
void generateSubs(string s, int& count){
      int pos = s.find_first_of('?');
      if(pos == -1){
            subsets[s]++;
            count++;
            return;
      }

      s[pos] = '-';
      generateSubs(s, count);
      s[pos] = '+';
      generateSubs(s, count);
}

bool validateSum(string s1, string s2){
      int pos1 = 0;
      int pos2 = 0;
      for(char i : s1) i == '+' ? pos1++ : pos1--;
      for(char i : s2) i == '+' ? pos2++ : pos2--;
      if(pos1 == pos2){
            return 1;
      }
      return 0;
}


double solve(string& s1, string& s2){
      subsets;
      double countCorrect = 0;
      int pos1 = 0;
      int pos2 = 0;

      if(s2.find('?') == -1 && validateSum(s1,s2)){
            return 1;
      }

      int count = 0;
      generateSubs(s2, count);
      for(auto i : subsets){
            bool isEquall = validateSum(i.first, s1);
            if(isEquall){
                  countCorrect += i.second;
            }
      }
      
      return countCorrect / count;
}


int main()
{
      smurf;
      string s1;
      string s2;
      cin >> s1 >> s2;
      double ans = solve(s1, s2);
      cout << fixed << setprecision(12) << ans << endl;
}