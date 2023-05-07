#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
const int N = 1e3+5;
int mat[N][N];
int n, m;
int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};

void dfs(int i, int j, vector<vector<int>>&vis, int &cnt){
  vis[i][j] = true;
  for(int k = 0; k < 4; k++){
    int x = fx[k]+i;
    int y = fy[k]+j;
    if(x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && mat[x][y] != 0){
      cnt += mat[x][y];
      dfs(x, y, vis, cnt);
    }
  }
}

void solution(){
  cin >> n >> m;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> mat[i][j];
    }
  }
  int ans = 0;
  vector<vector<int>>vis(n, vector<int>(m, 0));
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(!vis[i][j] && mat[i][j] != 0){
        int cnt = mat[i][j];
        dfs(i, j, vis, cnt);
        ans = max(ans, cnt);
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