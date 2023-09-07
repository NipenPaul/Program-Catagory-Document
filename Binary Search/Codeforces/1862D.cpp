#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  int ans = 0;
  int low = 2, high = 2e9;
  while(low <= high){
    int mid = (low + high) / 2;
    int cal = (mid * (mid-1)) / 2;
    if(n < cal){
      high = mid-1;
    }else{
      ans = mid;
      low = mid+1;
    }
  } 
  int extra = n - (ans*(ans-1))/2; 
  cout << ans+extra << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}