#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  map<int, int> mp;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    mp[v[i]] = 1;
  }
  for(int i = 0; i <= n; i++){
    if(mp[i] == 0){
      cout << i << endl;
      return;
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