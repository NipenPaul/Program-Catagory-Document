#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  vector<int> cnt(26, 0);
  set<char> se;
  for(char &c: ch){
    cnt[c-'a']++;
    se.insert(c);
  }
  int ct = 0;
  for(int i = 0; i < 26; i++){
    if(cnt[i] % 2) ct++;
  }
  if(n % 2 == 0){
    if(ct >= 1){
      cout << 0 << endl;
      return;
    }
  }
  if(n % 2){
    if(ct > 1){
      cout << 0 << endl;
      return;
    }
  }
  if(se.size() == 1 && n % 2){
    cout << 2 << endl;
    return;
  }
  cout << 1 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}