#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  string ch[n+5];
  for(int i = 0; i < n; i++){
    cin >> ch[i];
  }
  string tem = "snuke";
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){

      vector<pair<int, int>> v;
      string s = "";

      for(int k = 0; k < 5; k++){
        if(i+k < n){
          s += ch[i+k][j];
          v.push_back({i+k, j});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }

      s = "";
      v.clear();
       for(int k = 0; k < 5; k++){
        if(j+k < m){
          s += ch[i][j+k];
          v.push_back({i, j+k});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }
      s = "";
      v.clear();
      for(int k = 0; k < 5; k++){
        if(i-k >= 0){
          s += ch[i-k][j];
          v.push_back({i-k, j});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }
      s = "";
      v.clear();
       for(int k = 0; k < 5; k++){
        if(j-k >= 0){
          s += ch[i][j-k];
          v.push_back({i, j-k});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }

      s = "";
      v.clear();
       for(int k = 0; k < 5; k++){
        if(j-k >= 0 && i-k >= 0){
          s += ch[i-k][j-k];
          v.push_back({i-k, j-k});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }

      s = "";
      v.clear();
       for(int k = 0; k < 5; k++){
        if(j+k < m && i+k < n){
          s += ch[i+k][j+k];
          v.push_back({i+k, j+k});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }

      s = "";
      v.clear();
       for(int k = 0; k < 5; k++){
        if(j-k >= 0 && i+k < n){
          s += ch[i+k][j-k];
          v.push_back({i+k, j-k});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }

      s = "";
      v.clear();
       for(int k = 0; k < 5; k++){
        if(j+k < m && i-k >= 0){
          s += ch[i-k][j+k];
          v.push_back({i-k, j+k});
        }
      }
      if(s == tem){
        for(auto &[x, y]: v){
          cout << x+1 << " " << y+1 << endl;
        }
        return;
      }

    }
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}