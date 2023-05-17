#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  bool ok = false;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      for(int k = j+1; k < n; k++){
        if(v[j]-v[i] == v[k]-v[j]){
          ok = true;
        }
      }
    }
  }
  if(ok){
    cout << "No" << endl;
  } else{
    cout << "Yes" << endl;
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