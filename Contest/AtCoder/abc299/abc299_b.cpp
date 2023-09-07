#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, t; cin >> n >> t;
  vector<int> c(n), r(n);
  for(int i = 0; i < n; i++){
    cin >> c[i];
  }
  for(int i = 0; i < n; i++){
    cin >> r[i];
  }
  int mx = 0, ans = 0;
  for(int i = 0; i < n; i++){
    if(c[i] == t && mx < r[i]){
      mx = r[i];
      ans = i+1;
    }
  }
  if(mx != 0){
    cout << ans << '\n';
    return;
  }
  mx = 0;
  for(int i = 0; i < n; i++){
    if(c[i] == c[0] && mx < r[i]){
      mx = r[i];
      ans = i+1;
    }
  }
  cout << ans << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;
  while(t--){
    solution();
  }
}