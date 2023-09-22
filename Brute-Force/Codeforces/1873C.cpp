#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n = 10, m = 10;
  string s[n];
  for(int i = 0; i < n; i++){
    cin >> s[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if (s[i][j] == 'X') {
        if (i == 0 || i == 9 || j == 0 || j == 9) {
            ans += 1;
        } else if (i == 1 || i == 8 || j == 1 || j == 8) {
            ans += 2;
        } else if (i == 2 || i == 7 || j == 2 || j == 7) {
            ans += 3;
        } else if (i == 3 || i == 6 || j == 3 || j == 6) {
            ans += 4;
        } else {
            ans += 5;
        }
      }
    }
  }  
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