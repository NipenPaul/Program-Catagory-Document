#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, k; cin >> n >> k;
  int odd = (n+1) / 2;
  int ev = n/2;
  if(k > odd){
    cout << "NO" << endl;
    return;
  }
  int d = odd - k;
  if(d % 2 == 0 && ev >= k){
    cout << "YES" << endl;
    return;
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