#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

const int N = 1e6+2;
int dp[N];

void pre(){
  int mod = 1e9+7;
  int ans = 0;
  for(int i = 1; i < N; i++){
    ans = ans + (i * i) % mod;
    ans %= mod;
    dp[i] = ans;
  }
}
void solution(){
  int n; cin >> n;
  cout << dp[n] << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  pre();
  while(t--){
    solution();
  }
  return 0;
}