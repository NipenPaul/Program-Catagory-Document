#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      char c; cin >> c;
      if(c != '.'){
        cout << c;
      }
    }
  } 
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}