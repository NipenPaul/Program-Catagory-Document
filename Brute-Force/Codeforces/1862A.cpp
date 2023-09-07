#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  string s[n];
  for(int i = 0; i < n; i++){
    cin >> s[i];
  }
  string name = "vika";
  int k = 0;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(s[j][i] == name[k] && k < 4){
        k++;
        break;
      }
    }
  }
  if(k == 4)cout << "YES" << endl;
  else cout << "NO" << endl;
} 
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}