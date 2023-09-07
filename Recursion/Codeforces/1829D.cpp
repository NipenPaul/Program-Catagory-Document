#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
bool rec(int n, int m){
  if(n == m) return true;
  if(m > n || n % 3 != 0) return false;
  return rec(n/3, m) || rec((n-n/3), m);
}
void solution(){
  int n, m; cin >> n >> m;
  if(rec(n, m)) cout << "YES" << endl;
  else cout << "NO" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
