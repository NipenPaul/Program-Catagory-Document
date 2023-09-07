#include <bits/stdc++.h>
using namespace std;

void solution(){
  long long n, k;
  cin >> n >> k;
  long long g = gcd(k, 2);
  if(n % g == 0 || n % k == 0 || n % 2 == 0){
    cout << "YES" << '\n';
    return;
  }
  cout << "NO" << '\n';
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}