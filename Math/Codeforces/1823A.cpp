#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n, k; cin >> n >> k;
  vector<int> v(n+5);
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;
    v[i+1] = sum;
  }
  int ind = -1, ind1 = -1, ind2 = -1;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      if(v[i] == k && i == n){
        ind = i;
      }
      if(v[i]+v[j] == k && i+j == n){
        ind1 = i, ind2 = j;
      }
    }
  }
  if(ind != -1){
    cout << "YES" << endl;
    for(int i = 1; i <= n; i++){
      cout << 1 << " ";
    }
    cout << '\n';
  }else if(ind1 != -1 && ind2 != -1){
    cout << "YES" << endl;
    for(int i = 1; i <= ind1; i++){
      cout << 1 << " ";
    }
    for(int i = 1; i <= ind2; i++){
      cout << -1 << " ";
    }
    cout << '\n';
  }else{
    cout << "NO" << '\n';
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
  return 0;
}