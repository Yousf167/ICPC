/*
Time: 
Runtime: 
Link: https://codeforces.com/problemset/problem/1764/B
Complexity: 
Space Complexity: 
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define smurf ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef unordered_set<int> uset;

bool binsearch(int arr[], int n,int target){
      int l = 0;
      int r = n - 1;
      while(l <= r){
            int m = l + (r - l) / 2;
            if(arr[m] == target){
                  return true;
            }
            else if(arr[m] < target){
                  l = m + 1;
            }
            else{
                  r = m - 1;
            }
      }
      return false;
}

void solve(int arr[], int n) {
      uset inserted;
      for (int i = n - 1; i > 1; i--) {
            for (int j = 0; j < i; j++) {
                  int target = arr[i] - arr[j];
                  bool foundInArr = binsearch(arr, n, target);
                  if (!foundInArr && inserted.find(target) == inserted.end()) {
                        inserted.insert(target);
                  }
            }
      }
      cout << inserted.size() + n << "\n";
}

int main() {
      smurf;
      int t; cin>>t;
      while(t--){
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; ++i) {
                  cin >> arr[i];
            }
            solve(arr, n);
      }
      return 0;
}
