#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int ans = abs(v[0]-v[1]);
  ans = min(ans, abs(v[n-1]-v[n-2]));
  //cout << ans << endl;
  for(int i = 1; i < n-1; i++){
    ans = min(ans, max(abs(v[i]-v[i+1]), abs(v[i]-v[i-1])));
  }
  cout << ans << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}