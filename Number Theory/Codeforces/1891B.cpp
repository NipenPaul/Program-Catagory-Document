#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, q; cin >> n >> q;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  vector<int> vq;
  vector<int> vis(32, 0);
  for(int i = 0; i < q; i++){
    int x; cin >> x;
    if(vis[x] == 0){
      vq.push_back(pow(2, x));
      vis[x] = 1;
    }
  }
  for(int &x: vq){
    for(int i = 0; i < n; i++){
      if(v[i] % x == 0){
        v[i] += (x / 2);
      }
    }
  } 
  for(int &x: v){
    cout << x << " ";
  }
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}