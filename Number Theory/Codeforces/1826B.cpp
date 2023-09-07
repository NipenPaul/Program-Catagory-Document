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
  bool ok = true;
  int i = 0, j = n-1;
  vector<int> tem;
  while(i < j){
    if(v[i] != v[j]){
      ok = false;
    }
    tem.push_back(abs(v[i]-v[j]));
    i++;
    j--;
  }
  if(ok){
    cout << 0 << endl;
    return;
  }
  int ans = 0;
  for(int &x: tem){
    ans = gcd(ans, x);
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}