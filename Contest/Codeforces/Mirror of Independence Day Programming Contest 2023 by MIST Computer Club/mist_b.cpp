#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

bool ok(vector<int>&a, vector<int>&b, int x, int k){
  for(int i = 0; i < b.size(); i++){
    int need = x*a[i] - b[i];
    if(need > k) return false;
    if(need > 0) k -= need;
  }
  return true;
}

void solution(){
  int n, k; cin >> n >> k;
  std::vector<int> a(n), b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  int low = 0, high = 3e9, ans = 0;
  while(low <= high){
    int mid = (low+high) / 2;
    if(ok(a, b, mid, k)){
      ans = mid;
      low = mid+1;
    }else{
      high = mid-1;
    }
  }
  cout << ans << '\n';
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
