#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void dfs(int u, int pa, vector<vector<int>>&adj, vector<int>&dist, vector<int>&parent){
  for(int &v: adj[u]){
    if(pa == v) continue;
    dist[v] = dist[u] + 1;
    parent[v] = u;
    dfs(v, u, adj, dist, parent);
  }
}
void solution(){
  int n, k, c;
  cin >> n >> k >> c;
  vector<vector<int>>adj(n+1);
  for(int i = 1; i < n; i++){
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<int> dist(n+1, 0), parent(n+1, 0);
  dfs(1, -1, adj, dist, parent);
  int ans = 0, mx = 0, mxNode = 0;
  for(int i = 1; i <= n; i++){
    if(dist[i] > mx){
      mx = dist[i];
      mxNode = i;
    }
  }
  ans = dist[mxNode]*k;
  vector<int> vis(n+1, 0);
  int x = mxNode;
  while(x != 1){
    vis[x] = 1;
    x = parent[x];
  }
  if(k > c){
    int mx2 = 0;
    int tem = ans;
    for(int i = 1; i <= n; i++){
      if(adj[i].size() == 1){
        x = i;
        int cnt = 0;
        bool ok = true;
        while(x != 1){
          if(vis[x]){
            ok = false;
            break;
          }
          cnt++;
          x = parent[x];
        }
        if(ok){
          mx2 = max(mx2, cnt);
          ans = max(ans, tem+(mx2*(k-c)));
        }else{
          int cost = (cnt+dist[x])*c;
          int cal = (mx-dist[x]+cnt)*k;
          int hobe = cal-cost;
          ans = max(ans, hobe);
        }
      }
    }
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
  return 0;
}