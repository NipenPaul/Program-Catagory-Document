#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int a, b; cin >> a >> b;
  if(a == b){
    cout << "YES" << endl;
  }else{
    int d = abs(b-a);
    if(d % 2 == 0){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
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