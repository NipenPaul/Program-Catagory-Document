#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k, q; cin >> n >> k >> q;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int cnt = 0;
  int ans = 0;
  function<void(int, int)> cal = [&](int cnt, int k){
    for(int i = k; i <= cnt; i++){
      ans += (cnt-i+1);
    }
  };
  for(int i = 0; i < n; i++){
    if(v[i] <= q) cnt++;
    else{
      cal(cnt, k);
      cnt = 0;
    }
  } 
  if(cnt != 0){
   cal(cnt, k);
  } 
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}