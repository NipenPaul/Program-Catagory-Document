#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int ans = -1;
  for(int i = 0; i < n; i++){
    int cnt1 = 0;
    for(int j = 0; j < n; j++){
     if(v[j] > v[i]){
      cnt1++;
     }
    }
    int cnt2 = 0;
    for(int j = 0; j < n; j++){
      if(v[j] > cnt1){
        cnt2++;
      }
    }
    if(cnt1 == cnt2 && cnt2 >= v[i]){
      ans = cnt2;
    }
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}