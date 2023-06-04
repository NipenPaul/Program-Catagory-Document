#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int ind1 = 0, indn = 0, ind2 = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] == 1){
      ind1 = i;
    }
    if(v[i] == n){
      indn = i;
    }
    if(v[i] == 2){
      ind2 = i;
    }
  }
  if(ind1 < indn && ind2 < indn){
    if(ind1 > ind2){
      cout << ind1+1 << " " << indn+1 << endl;
      return;
    }
    cout << ind2+1 << " " << indn+1 << endl;
    return;
  }else if(ind1 > indn && ind2 > indn){
    if(ind1 > ind2){
      cout << ind2+1 << " " << indn+1 << endl;
      return;
    }
    cout << ind1+1 << " " << indn+1 << endl;
    return;
  }
  cout << 1 << " " << 1 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}