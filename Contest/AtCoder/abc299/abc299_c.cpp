#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  string s; cin >> s;
  int cnt = 0, ans = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == '-'){
      ans = max(cnt, ans);
      cnt = 0;
    }else{
      cnt++;
    }
  }
  cnt = 0;
  bool ok = false;
  for(int i = 0; i < n; i++){
    if(s[i] == '-'){
      if(ok == true){
        ans = max(cnt, ans);
      }
      ok = true;
      cnt = 0;
    }else{
      cnt++;
    }
  }
  if(ok == true){
    ans = max(cnt, ans);
  }
  if(ans == 0){
    ans = -1;
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