#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n+1, 0);
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    v[x] = i;
  }
  int cnt = 0;
  for(int i = 1; i < n; i++){
    if(v[i] > v[i+1]){
      cnt++;
    }
  }
  cout << cnt << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}