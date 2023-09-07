#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int zero = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] == 0){
      zero = 1;
    }
    v[i] = abs(v[i]);
  }  
  if(zero == 1){
    cout << 1 << endl;
    return;
  }
  int cnt5 = 0, cnt2 = 0;
  for(int i = 0; i < n; i++){
    while(v[i] % 2 == 0 && v[i] > 0){
      cnt2++;
      v[i] /= 2;
    }
    while(v[i] % 5 == 0 && v[i] > 0){
      cnt5++;
      v[i] /= 5;
    }
  }
  cout << min(cnt5, cnt2) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}