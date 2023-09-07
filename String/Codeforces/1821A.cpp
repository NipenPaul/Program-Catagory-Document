#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  string ch; cin >> ch;
  int ans = 1;
  if(ch[0] == '0'){
    cout << 0 << '\n';
    return;
  }
  for(int i = 0; i < ch.size(); i++){
    if(ch[i] == '?'){
      if(i == 0){
        ans *= 9;
      }else{
        ans *= 10;
      }
    }
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