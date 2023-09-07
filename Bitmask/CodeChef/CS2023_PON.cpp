#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k; cin >> n >> k;
  int kk = k;
  vector<int> ar(n);
  vector<int> vis(n, 1);
  vector<vector<int>>v(n, vector<int>(32, 0));
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    ar[i] = x;
    int j = 0;
    while(x != 0){
      v[i][j] = x % 2;
      x /= 2;
      j++;
    }
  }
  vector<int> vk(32, 0);
  int j = 0;
  while(k != 0){
      vk[j] = k % 2;
      k /= 2;
      j++;
  }
  for(int j = 0; j < 32; j++){
    if(vk[j] == 1){
      for(int i = 0; i < n; i++){
        if(v[i][j] == 0){
          vis[i] = 0;
        }
      }
    }
  }
  int xx = -1;
  for(int i = 0; i < n; i++){
    if(vis[i] == 1 && xx == -1){
      xx = ar[i];
    }
    if(xx != -1 && vis[i] == 1){
      xx &= ar[i];
    }
  }
  //cout << xx << endl;
  if(xx == kk)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
