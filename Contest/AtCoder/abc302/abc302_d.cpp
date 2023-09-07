#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
int bin(vector<int>&b, int d, int y, int x){
  int low = 0, high = b.size()-1;
  int ans = -1;
  while(low <= high){
    int mid = (low+high)/2;
    if(x <= b[mid] && y >= b[mid]){
      ans = b[mid];
      low = mid+1;
    }else if(y < b[mid]){
      high = mid-1;
    }else if(x > b[mid]){
      low = mid+1;
    }
  }
  return ans;
}
void solution(){
  int n, m, d; cin >> n >> m >> d;
  vector<int> a(n), b(m);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }  
  for(int i = 0; i < m; i++){
    cin >> b[i];
  }
  int ans = -1;
  sort(b.begin(), b.begin()+m);
  for(int i = 0; i < n; i++){
    int val = bin(b, d, a[i]+d, a[i]-d);
    if(val != -1){
     ans = max(ans, val+a[i]);
    }
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
