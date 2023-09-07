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
  if(v[0] != n){
    cout << "NO" << endl;
    return;
  }
  vector<int> ans;
  for(int i = n-1; i >= 0; i--){
    while(ans.size() < v[i]){
      ans.push_back(i+1);
    }
  }  
  if(ans == v) cout << "YES" << endl;
  else cout << "NO" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
