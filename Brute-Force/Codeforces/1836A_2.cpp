#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  vector<int> cnt(100, 0);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    cnt[v[i]]++;
  } 
  for(int i = 1; i < 100; i++){
    if(cnt[i-1] < cnt[i]){
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}