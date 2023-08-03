#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<pair<int, int>> v;
  for(int i = 0; i < n; i++){
    int a, b; cin >> a >> b;
    if(a <= 10){
      v.push_back({b, i+1});
    }
  }  
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  cout << v[0].second << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}