#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int l, r; cin >> l >> r;
  int ans = 1;
  int tem = r;
  while(tem != 0){
    ans *= 2;
    tem /= 2;
  }
  if(l == 0 && r == ans-1){
    cout << ans << endl;
    return;
  }

  set<int> se;
  for(int a = l; a <= r; a++){
    for(int b = a; b <= r; b++){
      int x = a^b;
      int y = a+b;
      if(x == y){
        se.insert(x);
      }
    }
  }
  cout << se.size() << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
