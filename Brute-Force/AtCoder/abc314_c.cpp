#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  string s; cin >> s;
  vector<int> v[m+1];
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    v[x].push_back(i);
  }
  for(int i = 1; i <= m; i++){
    int len = v[i].size();
    char ch = s[v[i][0]], pre;
    for(int j = 1; j < len; j++){
      int u = v[i][j];
      int t = v[i][j-1];
      pre = s[u];
      s[u] = ch;
      //CHECK(ch);
      ch = pre;
    }
    //CHECK(ch)
    s[v[i][0]] = ch;
    //CHECK(s)
  }
  cout << s << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}