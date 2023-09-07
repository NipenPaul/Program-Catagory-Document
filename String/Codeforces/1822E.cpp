#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  if(n & 1){
    cout << -1 << '\n';
    return;
  }
  vector<int> cnt(26, 0);
  for(char &c: ch){
    cnt[c-'a']++;
    if(cnt[c-'a'] > n/2){
      cout << -1 << '\n';
      return;
    }
  }
  for(int i = 0; i < 26; i++){
    cnt[i] = 0;
  }
  int need = 0, mx = 0;
  for(int i = 0; i < n/2; i++){
    if(ch[i] == ch[n-i-1]){
      need++;
      cnt[ch[i]-'a']++;
      mx = max(mx, cnt[ch[i]-'a']);
    }
  }
  if((need/2) >= mx){
    cout << need/2 + need%2 << '\n';
  }else{
    cout << mx << '\n';
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