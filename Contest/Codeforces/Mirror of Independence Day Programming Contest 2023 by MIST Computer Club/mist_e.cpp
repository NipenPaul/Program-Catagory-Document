#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  set<int> se;
  for(int i = 1; i*i <= m; i++){
    if(m % i == 0){
      se.insert(i);
      se.insert(m/i);
    }
  }
  sort(v.begin(), v.begin()+n);
  int cnt = 0;
  for(int x: se){
    bool ok = true;
    int low = 0, high = n-1;
    int ind = n-1;
    while(low <= high){
      int mid = (low+high)/2;
      if(x <= v[mid]){
        ind = mid;
        high = mid-1;
      }else{
        low = mid+1;
      }
    }
    for(int i = ind; i < n; i++){
      if(v[i] % x == 0){
        ok = false;
        break;
      }
    }
    if(ok) cnt++;
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