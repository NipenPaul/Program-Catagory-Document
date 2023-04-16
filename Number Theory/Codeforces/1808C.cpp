#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

int cnt(int x){
  int mx = 0, mn = 10;
  while(x != 0){
    int d = x % 10;
    if(mx < d){
      mx = d;
    }
    if(mn > d){
      mn = d;
    }
    x /= 10;
  }
  return mx-mn;
}
void solution(){
  int l, r; cin >> l >> r;
  int ans = l, p = 1;
  for(int i = 0; i <= 18; i++){
    for(int x = 0; x < 10; x++){
      int v = l / (p * p) + ((p - 1) / 9) * x;
      //CHECK(v);
      if(l <= v && v <= r && cnt(ans) > cnt(v)){
        ans = v;
      }
      v = r / (p * p) + ((p - 1) / 9) * x;
      //CHECK(v);
      if(l <= v && v <= r && cnt(ans) > cnt(v)){
        ans = v;
      }
    }
    p *= 10;
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