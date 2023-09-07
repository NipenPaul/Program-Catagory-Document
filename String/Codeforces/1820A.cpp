#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  string s; cin >> s;
  int n = s.size();
  int cnt = 0;
  string tem = "";
  if(s[0] == '_') cnt++;
  for(int i = 1; i < n; i++){
    if(s[i] == '_' && s[i-1] != '^'){
      cnt++;
    }
  }
  if(s[n-1] == '_') cnt++;
  if(s[0] == '^' && n == 1){
    cnt = 1;
  }
  cout << cnt << '\n';
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
