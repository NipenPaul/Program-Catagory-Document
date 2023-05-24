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
  sort(v.begin(), v.begin()+n, greater<int>());
  vector<pair<int, int>> ind(n, {0, 0});
  vector<pair<int, int>> vq;
  while(q--){
    int l, r; cin >> l >> r;
    vq.push_back({l, r});
    l--; r--;
    ind[l].first += 1;
    ind[r].second += 1;
  }
  int x = 0;
  for(int i = 0; i < n; i++){
    x += ind[i].first;
    ind[i].first = x;
    x -= ind[i].second;
    ind[i].second = i;
  }
  sort(ind.begin(), ind.begin()+n, greater<pair<int, int>>());
  vector<int> ans(n, 0);
  int i = 0;
  for(auto &[x, y]: ind){
    //cout << x << " " << y << endl;
    ans[y] = v[i];
    i++;
  }
  vector<int> cum(n+2, 0);
  for(int i = 0; i < n; i++){
    cum[i+1] = cum[i]+ans[i];
    //cout << cum[i+1] << " ";
  }
  int sum = 0;
  for(auto &[x, y]: vq){
    sum += (cum[y]-cum[x-1]);
  }
  cout << sum;
  cout << endl;
  for(int i = 0; i < n; i++){
    cout << ans[i] << " ";
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