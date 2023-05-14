#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
const int mod = 1e9+7;
void solution(){
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  sort(a.begin(), a.begin()+n, greater<int>());
  sort(b.begin(), b.begin()+n, greater<int>());
  int ans = 1;
  int j = 0;
  for(int i = 0; i < n; i++){
    while(j < n && a[i] <= b[j]) j++;
    ans = (ans * (i-j+1)) % mod;
    ans %= mod;
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