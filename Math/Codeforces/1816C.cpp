#include <bits/stdc++.h>
using namespace std;
#define int long long

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  if(n == 2){
    if(v[0] <= v[1]){
      cout << "YES\n";
      return;
    }else{
      cout << "NO\n";
      return;
    }
  }
  int mx = 1e18;
  for(int i = n-1; i > 0; i--){
    int d = mx-v[i];
    if(d > 0){
      v[i] += d;
      v[i-1] += d;
    }else if(d < 0){
      v[i] += d;
      v[i-1] += d;
    }
  }
 // for(int &x: v) cout << x << ' ';
 //cout << '\n';
  if(v[0] <= v[1]){
    cout << "YES\n";
    return;
  }else{
    cout << "NO\n";
    return;
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}