#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  string s; cin >> s;
  int n = s.size();
  int cnt = 0, mx = 0;
  for(char &c: s){
    if(c == '0'){
      mx = max(cnt, mx);
      cnt = 0;
    }else{
      cnt++;
    }
  }
  mx = max(cnt, mx);
  if(mx == n){
    cout << mx*mx << '\n';
    return;
  }
  cnt = 0;
  int ind = n-1;
  for(int i = 0; i < n; i++){
    if(s[i] == '0') {
      ind = i;
      break;
    }
    else cnt++;
  }
  for(int i = n-1; i > ind; i--){
    if(s[i] == '0'){
      break;
    }else{
      cnt++;
    }
  }
  mx = max(cnt, mx);
  int ans = 0;
  for(int i = 1; i <= mx; i++){
    ans = max((mx-i+1)*i, ans);
  }
  cout << ans << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}