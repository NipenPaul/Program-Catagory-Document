#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s; cin >> s;
  int n = s.size();
  for(int i = 0; i < n; i++){
    if(s[i] == '?'){
      if(i == 0){
        s[i] = '0';
      }else{
        if(s[i-1] == '0'){
          s[i] = '0';
        }else if(s[i-1] == '1'){
          s[i] = '1';
        }
      }
    }
  }
  cout << s << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}