#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  int cnt = 0;
  bool ok = false;
  for(int i = 0; i < n; i++){
    if(ch[i] == '1'){
      if(ok) cnt++;
      ok = false;
    }else{
      ok = true;
    }
  }
  if(ok) cnt++;
  if(ch[0] == '0') cnt--;
  cout << cnt << endl;  
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}