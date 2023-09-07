#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  if(n == 1 || m == 1){
    cout << "Yes" << endl;
    return;
  }
  if(n <= m){
    cout << "No" << endl;
    return;
  }
  for(int i = 2; i*i <= n; i++){
    if(n % i == 0 && i <= m){
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}