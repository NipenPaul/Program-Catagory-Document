#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, a, b; cin >> n >> a >> b;
  int ans = 0;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    if(x == (a+b)){
      ans = i+1;
    }
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
