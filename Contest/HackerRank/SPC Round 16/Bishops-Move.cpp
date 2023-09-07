#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, x, y, p, q; cin >> n >> x >> y >> p >> q;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i+j == x+y || abs(i-j) == abs(x-y)){
        if((i+j) == (p+q) || abs(i-j) == abs(p-q)){
          cout << 1 << endl;
          return;
        }
      }
    }
  }
  cout << 0 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}