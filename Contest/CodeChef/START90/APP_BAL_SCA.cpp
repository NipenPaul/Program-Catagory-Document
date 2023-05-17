#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
bool rec(int n, int m){
  if(n > m){
    return rec(n, 2*m);
  }
  if(n < m) return false;
  return true;
}
void solution(){
  int n, m; cin >> n >> m;
  if(n < m){
    cout << "NO" << endl;
    return;
  }
  if(n == m){
    cout << "YES" << endl;
    return;
  } 
  if(n > m){
    if(n % 2 == 1){
      cout << "NO" << endl;
      return;
    }
    if(rec(n, gcd(n, m))){
      cout << "YES" << endl;
      return;
    }
    cout << "NO" << endl;
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
