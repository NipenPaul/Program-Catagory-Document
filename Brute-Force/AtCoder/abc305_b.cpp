#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; n = 10;
  vector<int> v(n, 0);
  v[1] = 3;
  v[2] = 4;
  v[3] = 8;
  v[4] = 9;
  v[5] = 14;
  v[6] = 23;
  char p, q; cin >> p >> q;
  int a = p - 'A';
  int b = q - 'A';
  if(b < a){
    swap(a, b);
  }
  //cout << a << b << endl;
  cout << v[b] - v[a] << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}