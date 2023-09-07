#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int a, b, c; cin >> a >> b >> c;
  if(a > b){
    cout << "First" << endl;
  }else if(a < b){
    cout << "Second" << endl;
  }else{
    if(c % 2 == 0){
      cout << "Second" << endl;
    }else{
      cout << "First" << endl;
    }
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