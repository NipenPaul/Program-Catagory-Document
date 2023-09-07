#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v[n];
  for(int i = 0; i < n; i++){
    int m; cin >> m;
    for(int j = 0; j < m; j++){
      int x; cin >> x;
      v[i].push_back(x);
    }
  } 
  int x; cin >> x;
  vector<pair<int, int>> ve;
  for(int i = 0; i < n; i++){
    for(int &num: v[i]){
      if((x == num)){
        ve.push_back({v[i].size(),i+1});
        break;
      }
    }
  }
  if(ve.size() == 0){
    cout << 0 << endl;
    return;
  }
  sort(ve.begin(), ve.end());
  int xx = ve[0].first;
  int len = 0;
  for(int i = 0; i < ve.size(); i++){
    if(xx == ve[i].first)len++;
  }
  cout << len << endl;
  for(int i = 0; i < ve.size(); i++){
    if(xx == ve[i].first){
      cout << ve[i].second << " ";
    }
  }
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}