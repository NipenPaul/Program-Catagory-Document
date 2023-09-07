#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

// 4 cell visit..
int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};

void solution(){
  int n, m; cin >> n >> m;
  char mat[n+5][m+5];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> mat[i][j];
    }
  }

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      if(mat[i][j] == '.'){
        int cnt = 0;
        for(int k = 0; k < 4; k++){
          int x = i+fx[k];
          int y = j+fy[k];
          if(mat[x][y] == '#') cnt++;
        }
        if(cnt >= 2){
          cout << i << " " << j << endl;
          return;
        }
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