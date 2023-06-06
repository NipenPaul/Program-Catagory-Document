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
  sort(v.begin(), v.begin()+n);
  function<bool(int)> cal =  [&](int x)->bool{
    int cnt = 1;
    int mn = v[0], mx;
    for(int i = 1; i < n; i++){
      mx = v[i];
      int d = (mx-mn+1)/2;
      if(x < d){
        cnt++;
        mn = v[i];
      }
    }
    if(cnt > 3) return false;
    return true;
  };
  int ans = 1e9, low = 0, high = 1e9;
  while(low <= high){
    int mid = (low+high)/2;
    if(cal(mid)){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }  
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}