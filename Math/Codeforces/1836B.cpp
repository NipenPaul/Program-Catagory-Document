#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k, g; cin >> n >> k >> g;
  int all = k*g;
  int d = (g+1)/2 -1;
  int ck = all - d*n;
  if(ck < 0){
    cout << all << endl;
    return;
  } 
  int ans = all - ((ck+g-1)/g)*g;
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