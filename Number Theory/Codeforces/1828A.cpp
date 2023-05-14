#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int sum = 0;
  for(int i = 1; i < n; i++){
    v[i] = i+1;
    sum += (i+1);
  }
  int d = (sum)/n;
  d++;
  v[0] = (d*n) - sum;
  for(int &x: v){
    cout << x << " ";
  }
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}