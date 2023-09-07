#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  int d = n/5;
  int a = n - (d*5);
  int b = ((d+1)*5) - n;
  if(a > b){
    cout << (d+1)*5 << endl;
  } else{
    cout << d*5 << endl;
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