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
    pw >>=1;
    base = (base*base) % Mod;
  }
  return ans;
}

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  int cnt = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    if(v[i] % 2 == 0) cnt++;
  }
  if(n == cnt)
   cout << BigMod(2, cnt, 1e9+7)-1 << endl;
  else
   cout << BigMod(2, cnt, 1e9+7) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}