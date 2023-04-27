#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, k; cin >> n >> k;
  vector<int> v(n+1);
  vector<int> mp(n+1);
  for(int i = 1; i <= n; i++){
    cin >> v[i];
    mp[v[i]] = i;
  }
  if(k == 1){
    cout << 0 << '\n';
    return;
  }
  for(int i = 1; i <= n; i++){
    if(i != v[i]){
      int ind = mp[i];
      int in = abs(i-ind);
      if(in % k == 0){
        mp[v[i]] = mp[i];
        swap(v[i], v[mp[i]]);
      }
    }
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++){
    if(i != v[i]){
      cnt++;
    }
  }
  if(cnt == 0){
    cout << 0 << '\n';
  }else if(cnt == 2){
    cout << 1 << '\n';
  }else{
    cout << -1 << '\n';
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
  return 0;
}