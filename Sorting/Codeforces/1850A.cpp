#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; n = 3;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }  
  sort(v.begin(), v.begin()+n);
  if(v[1]+v[2] >= 10){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}