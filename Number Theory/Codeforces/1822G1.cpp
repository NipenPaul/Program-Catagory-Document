#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long
const int N = 1e6+1;
int cnt[N];
void solution(){
  int n; cin >> n;
  set<int> se;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    se.insert(x);
    cnt[x]++;
  }
  int ans = 0;
  int mx = *(se.rbegin());
  for(int i: se){
    if(cnt[i] > 2){
      ans += (cnt[i]*(cnt[i]-1)*(cnt[i]-2));
    }
    for(int b = 2; b <= mx; b++){
      int j = b * i;
      int k = j*b;
      if(k > mx) break;
      if(k < N && i != j && j != k &&  k !=  i){
        ans += (cnt[i] * cnt[k] * cnt[j]);
      }
    }
  }
  for(int i: se){
    cnt[i] = 0;
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
  return 0;
}