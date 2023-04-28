#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
int rec(int ind, int used, int n, string &ch, vector<int>&v, vector<vector<int>>&dp){
  if(ind == n) return 0;
  if(dp[ind][used] != -1) return dp[ind][used];
  int ans = rec(ind+1, 0, n, ch, v, dp);
  int ans1 = 0;
  if(ch[ind] == '1' && !used){
    ans1 = v[ind]+rec(ind+1, 0, n, ch, v, dp);
  }
  int ans2 = 0;
  if(ind+1 < n && ch[ind+1] == '1'){
    ans2 = v[ind]+rec(ind+1, 1, n, ch, v, dp);
  }
  return dp[ind][used] = max({ans, ans1, ans2});
}
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  vector<vector<int>> dp(n+1, vector<int>(2, -1));
  int ct = (ch[n-1] == '1');
  cout << rec(0, 0, n, ch, v, dp) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
