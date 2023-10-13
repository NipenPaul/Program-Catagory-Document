#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n = 3;
  vector<int> v;;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  if(v[0] == v[2]) {
    cout << "YES" << endl;
    return;
  }

  for(int i = 1; i <= 3; i++){
    int d = v.back();
    v.pop_back();
    v.push_back(v[0]);
    v.push_back(d-v[0]);
    sort(v.begin(), v.end());
    if(v[0] == v.back()){
      cout << "YES" << endl;
      return;
    }
  } 
  cout << "NO" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}