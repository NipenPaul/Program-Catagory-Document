#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n+1);
  for(int i = 1; i <= n; i++){
    cin >> v[i];
  }
  for(int i = 4; i <= 8*n; i *= 2){
    int j = i / 2;
    for(int k = j+1; k < i; k++){
      if(k+1 <= n && v[k] > v[k+1]){
        cout << "NO" << endl;
        return;
      }
    }
  }  
  cout << "YES" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}