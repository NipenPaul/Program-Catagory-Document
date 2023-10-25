#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n+1, 0);
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    v[x]++;
  }
  for(int i = 1; i <= n; i++){
    if(v[i] == 2){
      cout << i << endl;
      return;
    }
  }  
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}