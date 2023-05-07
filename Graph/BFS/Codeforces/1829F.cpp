#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n+1);
  for(int i = 0; i < m; i++){
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  int y = 0, node = 0;
  for(int i = 1; i <= n; i++){
    if(adj[i].size() == 1){
      node = i;
      break;
    }
  }
  node = adj[node][0];
  for(int i = 0; i < adj[node].size(); i++){
    int u = adj[node][i];
    if(adj[u].size() == 1){
      y++;
    }
  }
  set<int> se;
  for(int i = 1; i <= n; i++){
    if(adj[i].size() == 1){
      int u = adj[i][0];
      se.insert(u);
    }
  }
  int x = se.size();
  cout << x << " "<< y << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
