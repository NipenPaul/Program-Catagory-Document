#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  string s; cin >> s;
  for(char &c: s){
    if(c== 'z'||c=='x'||c=='c'||c=='v'||c=='b'||c=='n'||c=='m')
      continue;
    cout << c;
  }
  cout << "\n";
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}