#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n+5, 0);
  for(int i = 0; i < n; i++){
    int xx; cin >> xx;
    v[xx] = i+1;
  }
  set<pair<int, int>> se;
  for(int i = 2; i <= n; i++){
    se.insert({v[i], i});
  }
  for(int i = 2; i <= n; i++){
    int len = n-i+1;
    auto it = *se.begin();
    auto it2 = *se.rbegin();

    int x = it.first;
    int y = it2.first;

    //CHECK(x); CHECK(y);

    int len2 = y-x+1;
    int len3 = se.size();

    if(len == len2 && len3 == len){
      cout << len << endl;
      return;
    }
    if(se.size() > 0)
     se.erase(se.find({v[i], i}));
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}