#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

int check(vector<int>&v, int x, int c){
  int sum = 0;
  for(int i = 0; i < v.size(); i++){
    int d = ((x*2+v[i]) * (x*2+v[i]));
    if(c < d){
      return c+1;
    }
    sum += d;
    if(c < sum){
      return c+1;
    }
  }
  return sum;
}
void solution(){
  int n, c; cin >> n >> c;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int low = 0, high = 1e9;
  while(low <= high){
    int mid = (low + high) / 2;
    int cal = check(v, mid, c);
    if(cal < c){
      low = mid + 1;
    }else if(cal > c){
      high = mid - 1;
    }else{
      cout << mid << endl;
      return;
    }
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}