#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  string ans = "";
  bool ok = true;
  char pre;;
  for(int i = 0; i < n; i++){
    int j = i+1;
    ans += ch[i];
    while(i < n && ch[i] != ch[j]){
      j++;
    }
    i = j;
  }
  cout << ans << endl; 
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}