#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int mxi = 0, mxv = v[0];
  int mni = 0, mnv = v[0];
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] > mxv){
      mxi = i;
      mxv = v[i];
    }
    if(v[i] < mnv){
      mnv = v[i];
      mni = i;
    }
    if(v[i] > 0){
      cnt = 1;
    }
  } 
  vector<pair<int, int>> ans;
  if(cnt == 1){
    while(v[mxi] < 40){
      v[mxi] += v[mxi];
      ans.push_back({mxi+1, mxi+1});
    }
    while(v[0] < v[mxi]){
      v[0] += v[mxi];
      ans.push_back({1, mxi+1});
    }
    for(int i = 1; i < n; i++){
      while(v[i-1] > v[i]){
        v[i] += v[i-1];
        ans.push_back({i+1, i});
      }
    }
  }
  else{
    while(v[n-1] > v[mni]){
      v[n-1] += v[mni];
      ans.push_back({n, mni+1});
    }
    for(int i = n-2; i >= 0; i--){
      while(v[i] > v[i+1]){
        v[i] += v[i+1];
        ans.push_back({i+1, i+2});
      }
    }
  }
/*  for(int &x: v){
    cout << x << " ";
  }
  cout << endl;*/
  cout << ans.size() << endl;
  for(auto &[x, y]: ans){
    cout << x << " " << y << endl;
  } 
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}