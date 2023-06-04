#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  function<bool(int x)> isPrime = [&](int x){
    if(x == 1) return false;
    for(int i = 2; i*i <= x; i++){
      if(x % i == 0){
        return false;
      }
    }
    return true;
  };
  vector<vector<int>> vec(n+1, vector<int>(m+1, 0));
  int k = 1;
  if(isPrime(n) && isPrime(m)){
    for(int i = 1; i <= n; i += 2){
      for(int j = 1; j <= m; j++){
        vec[i][j] = k++;
      }
    }
    for(int i = 2; i <= n; i += 2){
      for(int j = 1; j <= m; j++){
        vec[i][j] = k++;
      }
    }
  }else{
    for(int i = 1; i <= n; i += 1){
      for(int j = 1; j <= m; j++){
        vec[i][j] = k++;
      }
    }
  } 
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cout << vec[i][j] << " ";
    }
    cout << endl;
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