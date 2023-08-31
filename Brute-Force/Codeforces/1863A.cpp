#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, a, q; cin >> n >> a >> q;
  string s; cin >> s;
  if(n <= a){
    cout << "YES" << endl;
    return;
  }
  int plus = 0;
  for(char &c: s){
    if(c == '+') plus++;
  }
  if(plus+a < n){
    cout << "NO" << endl;
    return;
  }
  int cnt = a;
  for(char &c: s){
    if(c == '+'){
      cnt++;
    }else{
      cnt--;
    }
    if(n <= cnt){
      cout << "YES" << endl;
      return;
    }
  } 
  cout << "MAYBE" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}