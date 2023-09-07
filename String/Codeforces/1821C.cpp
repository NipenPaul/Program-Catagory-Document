#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  string ch; cin >> ch;
  int n = ch.size();
  char cc = 'a';
  int ans = 1e9;
  for(int i = 0; i < 26; i++){
      char c = cc + i;
      int cnt = 0;
      bool ok = false;
      string tem = ch;
      while(!ok){
        int nn = tem.size();
        vector<int> vis(nn+5, 0);
        for(int j = 0; j < nn; j++){
          if(c == tem[j]){
            vis[j] = 1;
          }
        }
        vector<int> se(nn+5, 0);
        int ct = 0;
        string tem2 = "";
        for(int j = 0; j < nn; j++){
          if(vis[j] == 1){
            if(tem[j] == c){
              tem2 += c;
            }
            ct++;
            continue;
          }
          if(j-1 >= 0 && se[j-1] == 1){
            tem2 += tem[j];
          }else if(j+1 < nn && se[j+1] == 1){
            tem2 += tem[j];
          }else{
            vis[j] = 1;
            se[j] = 1;
          }

        }
        if(ct == nn){
          ok = true;
        }else{
          tem = tem2;
          cnt++;
        }
      }
     // cout << c << " = " << cnt << endl;
      ans = min(ans, cnt);
  }
  cout << ans << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}