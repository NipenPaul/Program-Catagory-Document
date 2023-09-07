#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string s; cin >> s;
  int ct1 = 0, ct2 = 0;
  int mx = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == '<'){
      mx = max(ct2, mx);
      ct2 = 0;
      ct1++;
    }else if(s[i] == '>'){
      mx = max(ct1, mx);
      ct2++;
      ct1 = 0;
    }
  }
  mx = max(ct2, mx);
  mx = max(ct1, mx);
  cout << mx+1 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}