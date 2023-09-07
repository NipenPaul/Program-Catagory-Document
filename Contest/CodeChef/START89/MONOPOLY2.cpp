#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n = 4;
  vector<int> v(n);
  int sum = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    sum += v[i];
  }
  for(int i = 0; i < n; i++){
    if(sum-v[i] < v[i]){
      cout << "YES" << endl;
      return;
    }
  }
  cout << "NO" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}