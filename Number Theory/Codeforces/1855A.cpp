#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(i+1 == v[i]){
      cnt++;
    }
  }  
  cout << (cnt+1)/2 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}