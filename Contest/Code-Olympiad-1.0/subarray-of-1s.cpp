#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int mx = 0;
  int cnt = 0;
  for(int i = 0; i < n; i++){
    if(v[i] == 0){
      mx = max(cnt, mx);
      cnt = 0;
    }else{
      cnt++;
    }
  } 
  mx = max(cnt, mx);
  cout << mx << endl; 
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}