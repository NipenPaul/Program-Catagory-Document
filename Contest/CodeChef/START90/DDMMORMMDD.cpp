#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int a, b, c;
  char ch; cin >> a >> ch >> b >> ch >> c;
  if(a <= 12 && b <= 12){
    cout << "BOTH" << endl;
  }else if(a <= 12){
    cout << "MM/DD/YYYY" << endl;
  }else{
    cout << "DD/MM/YYYY" << endl;
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