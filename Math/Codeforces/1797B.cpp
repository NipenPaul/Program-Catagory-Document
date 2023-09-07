#include <bits/stdc++.h>
using namespace std;

void solution(){
  int n, k; cin >> n >> k;
  vector<vector<int>> tem, v(n+1, vector<int>(n+1));
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cin >> v[i][j];
    }
  }
  tem = v;
  int ii = 1, jj = 1;
  for(int i = n; i >= 1; i--){
    jj = 1;
    for(int j = n; j >= 1; j--){
      tem[ii][jj] = v[i][j];
      jj++;
    }
    ii++;
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(v[i][j] != tem[i][j]) cnt++;
    }
  }
  cnt /= 2;
  if(cnt <= k && ((k-cnt)%2 == 0 || n%2 != 0)){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}