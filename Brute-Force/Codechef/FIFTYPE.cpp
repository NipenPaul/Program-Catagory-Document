#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  if(n == 50){
    cout << 0 << '\n';
    return;
  }
  if(n < 50){
    int cnt = 0;
    while(n < 50){
      n += 2;
      cnt++;
    }
    if(n != 50) cnt += 2;
    cout << cnt << '\n';
  }else if(n > 50){
    int cnt = 0;
    while(n > 50){
      n -= 3;
      cnt++;
    }
    if( n == 48) cnt += 1;
    if(n == 49) cnt += 3;
    cout << cnt << '\n';
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
}