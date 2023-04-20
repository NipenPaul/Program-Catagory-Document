#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, k; cin >> n >> k;
  vector<int> l(n), r(n);
  for(int &x: l) cin >> x;
  for(int &x: r) cin >> x;
  int ans = 1e18;
  priority_queue<int, vector<int>, greater<int>> pq;
  int sum = 0;
  for(int i = 0; i < n; i++){
    int ase = r[i]-l[i]+1;
    sum += ase;
    pq.push(ase);
    while(sum >= k){
      int need = k - (sum - ase) + l[i] - 1;
      ans = min(ans, 2*(int)pq.size()+need);
      sum -= pq.top();
      pq.pop();
    }
  }
  if(ans == 1e18) ans = -1;
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
