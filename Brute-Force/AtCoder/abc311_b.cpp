#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  string ch[n];
  for(int i = 0; i < n; i++){
    cin >> ch[i];
  }
  int ans = 0;
  int ct = 0;
  for(int i = 0; i < m; i++){
    bool ok = true;
    for(int j = 0; j < n; j++){
      if(ch[j][i] == 'x'){
        ok = false;
      }
    }
    if(ok){
      ct++;
      ans = max(ct, ans);
    }else{
      ct = 0;
    }
  }
  ans = max(ct, ans);
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}