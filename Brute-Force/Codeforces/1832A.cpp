#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string ch; cin >> ch;
  set<char> se;
  map<char, int> mp;
  for(char &c: ch){
    se.insert(c);
    mp[c]++;
  } 
  if(se.size() == 1){
    cout << "NO" << endl;
    return;
  }
  int cnt = 0;
  for(auto &[x, y]: mp){
    if(y > 1){
      cnt++;
    }
  }
  if(cnt > 1){
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}