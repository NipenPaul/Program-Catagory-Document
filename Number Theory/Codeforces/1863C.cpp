#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k; cin >> n >> k;
  vector<int> v(n+1);
  vector<int> cnt(n+1, 0);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    cnt[v[i]] = 1;
  }
  for(int i = 0; i <= n; i++){
    if(cnt[i] == 0){
      v[n] = i;
      break;
    }
  } 
  vector<int> ans(n+1, 0);
  for(int i = 0; i <= n; i++){
    int d = (i+k) % (n+1);
    ans[d] = v[i];
  } 
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