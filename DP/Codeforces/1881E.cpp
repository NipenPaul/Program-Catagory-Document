#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

int rec(int ind, int n, vector<int>&v, vector<int>&dp){
  if(ind >= n) return 0;
  if(dp[ind] != -1) return dp[ind];
  int x = INT_MAX;
  if(ind+v[ind]+1 <= n){
    x = rec(ind+v[ind]+1, n, v, dp);
  }
  int y = 1+rec(ind+1, n, v, dp);

  return dp[ind] = min(x, y);
}
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  vector<int> dp(n+1, -1);
  cout << rec(0, n, v, dp) << endl;  
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}