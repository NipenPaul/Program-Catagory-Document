#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, c; cin >> n >> c;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
    v[i] += (i+1);
  }
  sort(v.begin(), v.begin()+n);
  int cnt = 0;
  int i = 0;
  while(i < n && c-v[i] >= 0){
    cnt++;
    c -= v[i];
    i++;
  }
  cout << cnt << '\n';
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
