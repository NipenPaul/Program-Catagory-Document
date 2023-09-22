#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string ch; cin >> ch;
  if(ch[0] == 'a' || ch[1] == 'b' || ch[2] == 'c'){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}