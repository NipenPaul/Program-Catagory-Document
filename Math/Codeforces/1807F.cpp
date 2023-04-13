#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, m, i1, j1, i2, j2;
  cin >> n >> m >> i1 >> j1 >> i2 >> j2;
  string d; cin >> d;
  int dx = 1, dy = 1;
  if(d[0] == 'U') dx = -1;
  if(d[1] == 'L') dy = -1;
  int cnt = 0, ans = 0;
  while(cnt < 4*n*m){
    if(i1 == i2 && j1 == j2){
      cout << ans << '\n';
      return;
    }
    cnt++;
    bool bounch = false;
    if(i1+dx < 1 || i1+dx > n){
      bounch = true;
      dx *= -1;
    }
    if(j1+dy < 1 || j1+dy > m){
      bounch = true;
      dy *= -1;
    }
    ans += bounch;
    i1 += dx;
    j1 += dy;
  }
  cout << -1 << '\n';
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
