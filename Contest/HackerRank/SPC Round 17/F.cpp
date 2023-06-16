#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

int BigMod(int base, int pw, int Mod){
  int ans = 1;
  while(pw > 0){
    if(pw & 1){
      ans = (ans * base) % Mod;
    }
    pw >>=1L;
    base = (base*base) % Mod;
  }
  return ans;
}
int BigMod2(int base, int pw){
  int ans = 1;
  while(pw > 0){
    if(pw & 1){
      ans = (ans * base);
    }
    pw >>=1L;
    base = (base*base);
  }
  return ans;
}

void solution(){
  int n; cin >> n;
  int d = (n+1)/2;
  cout << BigMod(2, d, 1e9+7) << " ";
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
