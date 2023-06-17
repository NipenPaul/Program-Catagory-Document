#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int unsigned long long
#define endl '\n'
using namespace std;
void solution(){
  int n = 64;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int ans = 0;
  int pw = 1;
  for(int i = 0; i < n; i++){
    ans += v[i]*pw;
    pw *= 2;
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