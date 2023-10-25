#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s; cin >> s;
  int len = s.size()-1;
  int i = 0;
  while(i < len){
    if(s[i] != s[len]){
      cout << "NO" << endl;
      return;
    }
    i++;
    len--;
  } 
  cout << "YES" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}