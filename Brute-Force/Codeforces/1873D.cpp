#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k; cin >> n >> k;
  string s; cin >> s;
  int len = 0;
  int ans = 0;
  bool ok = false;
  for(int i = 0; i < n; i++){
    if(s[i] == 'B' && !ok){
      ok = true;
    }
    if(ok){
     len++;
    }
    if(len == k){
      ans++;
      len = 0;
      ok = false;
    }
  } 
  if(len) ans++;
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