#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
const int N = 2e5+2;
vector<int> adj[N];
int dis[N], disMx[N];
bool vis[N];
int n, k;
int bfs(int u){
  for(int i = 1; i <= n; i++){
    dis[i] = -1;
  }
  dis[u] = 0;
  queue<int> que;
  que.push(u);
  while(!que.empty()){
    int u = que.front();
    que.pop();
    for(int &v: adj[u]){
      if(dis[v] == -1){
        dis[v] = dis[u] + 1;
        que.push(v);
      }
    }
  }
  int ind = -1;
  for(int i = 1; i <= n; i++){
    if(vis[i] && (ind == -1 || dis[i] > dis[ind])){
      ind = i;
    }
  }
  return ind;
}
void solution(){
  cin >> n >> k;
  for(int i = 1; i <= n; i++){
    vis[i] = false;
    dis[i] = -1;
    adj[i].clear();
  }
  for(int i = 1; i <= k; i++){
    int x; cin >> x;
    vis[x] = true;
  }
  for(int i = 1; i < n; i++){
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  } 
  int a = bfs(1);
  int b = bfs(a);
  for(int i = 1; i <= n; i++){
    disMx[i] = dis[i];
  }
  bfs(b);
  int ans = INT_MAX;
  for(int i = 1; i <= n; i++){
    disMx[i] = max(disMx[i], dis[i]);
    ans = min(ans, disMx[i]);
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