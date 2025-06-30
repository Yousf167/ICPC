/*
Time: 0:44:52
Runtime: 62ms
Link: https://codeforces.com/problemset/problem/1765/M
Complexity: 
Space Complexity: 
*/
#include <bits/stdc++.h>



#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
      if (n <= 1) return false;
      for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
      }
      return true;
}

void find_min_lcm_pair(int n) {
      if (is_prime(n)) {
            cout << 1 << " " << n - 1 << endl;
      } else {
            for (int i = 2; i * i <= n; i++) {
                  if (n % i == 0) {
                        int a = n / i;
                        int b = n - a;
                        cout << a << " " << b << endl;
                        return;
                  }
            }
      }
}

int main() {
      int t;
      cin >> t;
      while (t--) {
            int n;
            cin >> n;
            find_min_lcm_pair(n);
      }
      return 0;
}


/* 
int lcm(int a, int b){
      return (a * b) / gcd(a, b);
}

pair<int, int> solve(int n){
      int min = INT_MAX - 1;
      pair<int,int> minPair;
      for(int i = 1; i <= n / 2; i++){
            int num1 = i;
            int num2 = n - i;
            int LCM = lcm(num1, num2);
            if(LCM < min){
                  min = LCM;
                  minPair = {num1, num2};
            }
      }
      return minPair;
}


int main()
{
      smurf;
      int t;
      cin>>t;
      while(t--){
            int n;
            cin>>n;
            auto ans = solve(n);
            cout<<ans.first<<" "<<ans.second<<endl;
      }
} */