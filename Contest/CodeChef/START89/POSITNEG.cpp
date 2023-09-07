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
  int sum1 = 0, sum2 = 0;
  for(int i = 0; i < n; i++){
    if(v[i] == 1){
      sum1 += (i+1);
    }else{
      sum2 += (i+1);
    }
  }
  cout << abs(sum2-sum1) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}