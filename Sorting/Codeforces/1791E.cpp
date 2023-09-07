#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int neg = 0, sum = 0;
  for(int &x: v){
    cin >> x;
    if(x < 0) neg++;
    x = abs(x);
    sum += x;
  }
  sort(v.begin(), v.begin()+n);
  if(neg & 1){
    sum -= (2*v[0]);
  }
  cout << sum << '\n';
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
