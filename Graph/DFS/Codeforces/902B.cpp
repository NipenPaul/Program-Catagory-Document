#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long
const int N = 1e4+5;
vector<int> adj[N];
int color[N], ans;
void dfs(int u, int pa, int c){
  for(int &v: adj[u]){
    if(pa == v){
      continue;
    }
    if(c != color[v]) ans++;
    dfs(v, u, color[v]);
  }
}
void solution(){
  int n; cin >> n;
  for(int u = 2; u <= n; u++){
    int v; cin >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for(int i = 1; i <= n; i++){
    cin >> color[i];
  }
  ans = 1;
  dfs(1, -1, color[1]);
  cout << ans << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
 // cin >> t;
  while(t--){
    solution();
  }
  return 0;
}