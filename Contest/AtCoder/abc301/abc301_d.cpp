#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s; cin >> s;
  int n; cin >> n;
  int cal = 0;
  int k = 1;
  for(int i = s.size()-1; i >= 0; i--){
    if(s[i] == '1'){
      cal += k;
    }
    if(cal > n){
      cout << -1 << endl;
      return;
    }
    k *= 2;
  }  
  if(cal > n){
    cout << -1 << endl;
    return;
  }
  int len = s.size();
  int pw = pow(2, len-1);
  for(int i = 0; i < len; i++){
    if(s[i] == '?'){
      if(cal+pw <= n){
        cal += pw;
      }
    }
    pw /= 2;
  } 
  cout << cal << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
