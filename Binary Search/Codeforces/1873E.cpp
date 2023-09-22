#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

bool bin(vector<int>&v, int x, int mid){
  int ans = 0;
  for(int i = 0; i < v.size(); i++){
    if(v[i] < mid){
      ans += (mid-v[i]);
    }
  }
  if(x >= ans) return true;
  return false;
}
void solution(){
  int n, x; cin >> n >> x;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }  
  int low = 1, high = 1e10;
  int ans = 1;
  while(low <= high){
    int mid = (low + high) / 2;
    if(bin(v, x, mid)){
      low = mid+1;
      ans = mid;
    }else{
      high = mid-1;
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