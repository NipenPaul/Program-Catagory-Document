#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, c; cin >> n >> c;
  vector<pair<int, int>> v;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    v.push_back({x+min(i+1, n-i), x+i+1});
  }
  sort(v.begin(), v.begin()+n);
  vector<int> pre(n+1);
  pre[0] = 0;
  for(int i = 0; i < n; i++){
    pre[i+1] = v[i].first+pre[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    int tem_c = c-v[i].second;
    int l = 0, h = n, mx = 0;
    while(l <= h){
      int m = (l+h) / 2;
      int pval = pre[m];
      int len = m+1;
      if(m > i){
        pval -= v[i].first;
        len--;
      }
      if(pval <= tem_c){
        mx = max(mx, len);
        l = m + 1;
      }else{
        h = m - 1;
      }
    }
    ans = max(ans, mx);
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
