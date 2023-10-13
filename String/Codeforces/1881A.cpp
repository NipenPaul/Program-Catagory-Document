#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  string str1, str2; cin >> str1 >> str2;
  for(int i = 1; i <= 6; i++){
    if(str1.find(str2) != -1){
      cout << i-1 << endl;
      return;
    }
    str1 += str1;
  } 
  cout << -1 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}