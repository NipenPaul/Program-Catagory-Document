#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
map<int, int> mp;

int rec(int n){
  if(n == 0) return 1;
  if(mp[n] != 0) return mp[n];
  return mp[n] = rec(n/2) + rec(n/3);
}
void solution(){
  int n; cin >> n;
  cout << rec(n) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}