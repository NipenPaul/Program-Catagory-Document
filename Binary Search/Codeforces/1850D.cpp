#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

bool check(vector<int>&v, int x, int k){
  int cnt = 1;
  for(int i = 0; i < v.size(); i++){
    if(i+1 < v.size() && v[i+1]-v[i] <= k){
      cnt++;
    }else{
      cnt = 1;
    }
    if(x == cnt) return true;
  }
  return false;
}
void solution(){
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  } 
  sort(v.begin(), v.begin()+n);
  int low = 1, high = n;
  int bana = 1;
  while(low <= high){
    int mid = (low + high) / 2;
    if(check(v, mid, k)){
      low = mid+1;
      bana = mid;
    }else{
      high = mid-1;
    }
  }
  cout << n-bana << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}