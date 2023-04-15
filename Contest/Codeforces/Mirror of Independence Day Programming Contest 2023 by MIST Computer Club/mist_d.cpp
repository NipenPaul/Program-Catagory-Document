#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

const int N = 1e5+1;
vector<int> d[N];

void divisors(){
  for(int i = 1; i < N; i++){
    for(int j = i; j < N; j += i){
      d[j].emplace_back(i);
    }
  }
}

void solution(){
  int n, q; cin >> n >> q;
  unordered_map<int, bool> mp;
  for(int i = 0; i < n; i++){
    int x; cin >> x;
    mp[x] = 1;
  }
  while(q--){
    int x; cin >> x;
    int cnt = d[x].size();
    for(int &val: d[x]){
      if(mp.find(val) != mp.end()){
        cnt--;
      }
    }
    cout << cnt << '\n';
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  divisors();
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}
