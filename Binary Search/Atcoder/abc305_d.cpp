#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

int bin_lower(vector<int>&v, int x){
  int low = 0, high = v.size()-1;
  int ans = 0;
  while(low <= high){
    int mid = (low+high)/2;
    if(v[mid] >= x){
      high = mid-1;
      ans = mid;
    }else{
      low = mid+1;
    }
  }
  return ans;
}

int bin_upper(vector<int>&v, int x){
  int low = 0, high = v.size()-1;
  int ans = 0;
  while(low <= high){
    int mid = (low+high)/2;
    if(v[mid] <= x){
      low = mid+1;
      ans = mid;
    }else{
      high = mid-1;
    }
  }
  return ans;
}
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  vector<int> cum(n+5);
  for(int i = 0; i < n-1; i++){
    int d = v[i+1] - v[i];
    if(i % 2 == 1){
      cum[i+1] = d+cum[i];
    }else{
      cum[i+1] = cum[i];
    }
  }
  cum[n] = cum[n-1];
  int q; cin >> q;
  while(q--){
    int l, r; cin >> l >> r;
    int a = bin_lower(v, l);
    int b = bin_upper(v, r);
    int ans = cum[b] - cum[a];
    if(a % 2 == 0){
      ans += (v[a]-l);
    }
    if(b % 2 == 1){
      ans += (r-v[b]);
    }
    cout << ans << endl;
  }  
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
