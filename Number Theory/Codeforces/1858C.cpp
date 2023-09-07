#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> cnt(n+1, 0);
  cout << 1 << " ";
  cnt[1] = 1;
  for(int i = 2; i <= n; i++){
    if(cnt[i] == 0){
      for(int j = i; j <= n; j *= 2){
        cout << j << " ";
        cnt[j] = 1;
      }
    }
  }  
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}