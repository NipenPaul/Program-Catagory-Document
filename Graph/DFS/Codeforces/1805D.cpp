#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e5+2;
vector<int> adj[N];
int n, h[N], lh[N];
void dfs(int src, int pa){
  for(int &v: adj[src]){
    if(v != pa){
      lh[v] = lh[src]+1;
      h[v] = max(h[v], lh[v]);
      dfs(v, src);
    }
  }
}
int mxNode(){
  int mx = 0, mxn = 0;
  for(int i = 1; i <= n; i++){
    if(h[i] >= mx){
      mx = h[i];
      mxn = i;
    }
  }
  return mxn;
}
int bin(int x, vector<pair<int, int>> &v){
  int low = 0, high = v.size()-1;
  int ans = -1;
  while(low <= high){
    int mid = (low + high) / 2;
    if(v[mid].first >= x){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  return ans;
}
void solution(){
  cin >> n;
  for(int i = 0; i < n-1; i++){
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1, -1);
  int node = mxNode();
  lh[node] = 0;
  dfs(node, -1);
  node = mxNode();
  lh[node] = 0;
  dfs(node, -1);
  map<int, int> ma;
  for(int i = 1; i <= n; i++){
    ma[h[i]]++;
  }
  vector<pair<int, int>> v;
  for(auto &[x, y]: ma){
    v.push_back({x, y});
  }
  sort(v.begin(), v.end());
  int ns = v.size();
  vector<int> cum(ns+2);
  for(int i = 0; i < ns; i++){
    cum[i+1] = cum[i] + v[i].second;
  }
  for(int i = 1; i <= n; i++){
    int ind = bin(i, v);
    if(ind == -1){
      cout << n << " ";
    }else{
      int x = cum[ns]-cum[ind];
      cout << n-x+1 << " ";
    }
  }
  cout << '\n';
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
