#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

const int N = 1e5+2;
vector<int> adj[N];
int ar[N], parent[N], subSize[N];
long long preSum[N];
vector<set<pair<int, int>>>s;

void dfs(int u, int pa){
  preSum[u] = ar[u];
  subSize[u] = 1;
  for(int &v: adj[u]){
    if(pa == v) continue;
    parent[v] = u;
    dfs(v, u);
    preSum[u] += preSum[v];
    //CHECK(u);CHECK(v);
    subSize[u] += subSize[v];
    s[u].insert({-subSize[v], v});
  }
}
void solution(){
  int n, m; cin >> n >> m;
  for(int i = 1; i <= n; i++){
    cin >> ar[i];
  }
  for(int i = 1; i < n; i++){
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  s.resize(n+2);
  dfs(1, -1);
  /*for(int i = 1; i <= n; i++){
    CHECK(subSize[i]);
  }
  for(int i = 1; i <= n; i++){
    cout << i << ": \n";
    for(auto it: s[i]){
      cout << it.first << " " << it.second << endl;
    }
  }*/
  while(m--){
    int t, u; cin >> t >> u;
    if(t == 1){
      cout << preSum[u] << '\n';
    }else{
      if(s[u].empty()) continue;

      int v = s[u].begin()->second;

      s[parent[u]].erase({-subSize[u], u});
      s[u].erase({-subSize[v], v});

      subSize[u] -= subSize[v];
      subSize[v] += subSize[u];

      preSum[u] -= preSum[v];
      preSum[v] += preSum[u];

      s[v].insert({-subSize[u], u});
      s[parent[u]].insert({-subSize[v], v});

      parent[v] = parent[u];
      parent[u] = v;
    }
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