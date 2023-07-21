#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
const int N = 2e5+2;
vector<int> divs[N];
void divisor(){
  for(int i = 1; i < N; i++){
    for(int j = i; j < N; j += i){
      divs[j].push_back(i);
    }
  }
}
void solution(){
  int n; cin >> n;
  vector<int> cnt(n+5, 0);
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    if(x <= n){
      cnt[x]++;
    }
  }  
  int ans = 0;
  for(int i = 1; i <= n; i++){
    int ct = 0;
    for(int j = 0; j < divs[i].size(); j++){
      int val = divs[i][j];
      if(val <= n)
        ct += cnt[val];
    }
    ans = max(ct, ans);
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  divisor();
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}