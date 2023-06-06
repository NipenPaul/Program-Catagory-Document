#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k; cin >> n >> k;
  int num = n;
  int pw = 0;
  while(n > 0){
    n /= 2;
    pw++;
  }
  if(pw <= k){
    cout << num+1 << endl;
  }else{
    int ans = 1;
    while(k > 0){
      ans *= 2;
      k--;
    }
    cout << ans << endl;
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}