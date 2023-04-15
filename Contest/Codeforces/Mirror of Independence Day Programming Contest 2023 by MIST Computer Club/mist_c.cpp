#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int &x: v) cin >> x;
  sort(v.begin(), v.begin()+n);
  int ans = 0;
  for(int i = 0; i < n; i += 2){
    ans += max(v[i], v[i+1]);
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