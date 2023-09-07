#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, k; cin >> n >> k;
  vector<vector<int>> v(n, vector<int>(n, 0));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(v[i][j] == 1) continue;
      if(i == j){
        if(k > 0){
          k--;
          v[i][j] = v[j][i] = 1;
        }
      }else{
        if(k > 1){
          v[i][j] = v[j][i] = 1;
          k -= 2;
        }
      }
    }
  }
  if(k){
    cout << -1 << '\n';
    return;
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << v[i][j] << " ";
    }
    cout << '\n';
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;
  while(t--){
    solution();
  }
}