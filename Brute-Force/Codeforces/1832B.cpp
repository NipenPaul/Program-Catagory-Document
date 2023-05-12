#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k; cin >> n >> k;
  vector<int> v(n);
  vector<int> cum(n+2, 0);
  int ans = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    ans += v[i];
  }
  sort(v.begin(), v.begin()+n);
  for(int i = 1; i <= n; i++){
    cum[i] = cum[i-1] + v[i-1];
  }
  int mx = cum[n-k];
  mx = max(mx, cum[n]-cum[k*2]);
  int r = n-1, l = 0, sum = 0;
  for(int i = k; i >= 1; i--){
    l++;
    int lr = k-l;
    sum += v[r];
    int xx = cum[lr*2];
    r--;
    mx = max(mx, ans-(sum+xx));
  }
  cout << mx << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
