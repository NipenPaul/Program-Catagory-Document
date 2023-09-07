#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  std::map<int, int> mp;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    mp[v[i]]++;
  }
  int mis = 0;
  for(int i = 0; i <= n+2; i++){
    if(mp[i] == 0){
      mis = i;
      break;
    }
  }
  //CHECK(mis);
  int lagbe = mis+1;
  int l = -1;
  for(int i = 0; i < n; i++){
    if(lagbe == v[i]){
      l = i;
      break;
    }
  }
  int r = -1;
  for(int i = n-1; i >= 0; i--){
    if(lagbe == v[i]){
      r = i;
      break;
    }
  }
  //CHECK(l); CHECK(r);
  if(l == -1){
    int cnt = 0;
    set<int> se;
    for(int i = 0; i < n; i++){
      se.insert(v[i]);
      if(mis > v[i]){
        cnt++;
      }
    }
    if(cnt == n && se.size() == n){
      cout << "No\n";
      return;
    }else{
      cout << "Yes\n";
      return;
    }
  }
  for(int i = l; i <= r; i++){
    mp[v[i]]--;
    v[i] = mis;
    mp[v[i]]++;
  }
  for(int i = 0; i <=2*n; i++){
    if(mp[i] == 0){
      if(i == mis+1){
       // cout << i << endl;
        cout << "Yes\n";
        return;
      }else{
        cout << "No\n";
        return;
      }
    }
  }
  cout << "No\n";
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
