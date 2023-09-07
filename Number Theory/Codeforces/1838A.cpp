#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  bool neg = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] < 0){
      neg = 1;
    }
  }
  sort(v.begin(), v.begin()+n);
  if(neg) cout << v[0] << endl;
  else cout << v[n-1] << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}