#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int h, m; cin >> h >> m;
  int mm = h*60+m;
  int ans = 0;
  while(mm > 0){
    if(mm >= 135){
      ans += 135;
      mm -= 135;
    }else{
      ans += mm;
      mm = 0;
    }
    if(mm >= 45){
      mm -= 45;
    }else{
      mm = 0;
    }
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