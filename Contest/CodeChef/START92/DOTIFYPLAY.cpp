#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k, l; cin >> n >> k >> l;
  vector<int> vec;
  for(int i = 0; i < n; i++){
    int u, v; cin >> u >> v;
    if(v == l)
      vec.push_back(u);
  }
  int sz = vec.size();
  if(sz < k){
    cout << -1 << endl;
    return;
  }
  sort(vec.begin(), vec.end(), greater<int>());
  int ans = 0;
  for(int i = 0; i < k; i++){
    ans += vec[i];
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