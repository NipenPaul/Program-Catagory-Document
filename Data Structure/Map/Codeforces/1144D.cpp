#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  map<int, int> mp;
  int mx = 0, val = 0;
  for(int i = 0; i < n; i++){
    cin >> v[i];
    mp[v[i]]++;
    if(mx <= mp[v[i]]){
      mx = mp[v[i]];
      val = v[i];
    }
  }
  vector<vector<int>> ans;
  for(int i = 0; i < n; i++){
    if(v[i] == val){
      vector<int> tem;
      for(int j = i+1; j < n; j++){
        if(val < v[j]){
          tem.push_back(2);
          tem.push_back(j);
          tem.push_back(j-1);
        }else if(val > v[j]){
          tem.push_back(1);
          tem.push_back(j);
          tem.push_back(j-1);
        }
        if(tem.size() > 0)
          ans.push_back(tem);
        tem.clear();
      }
      for(int j = i-1; j >= 0; j--){
        if(val < v[j]){
          tem.push_back(2);
          tem.push_back(j);
          tem.push_back(j+1);
        }else if(val > v[j]){
          tem.push_back(1);
          tem.push_back(j);
          tem.push_back(j+1);
        }
        if(tem.size() > 0)
          ans.push_back(tem);
        tem.clear();
      }
      break;
    }
  }
  cout << ans.size() << endl;
  for(auto &it: ans){
    cout << it[0] << " " << it[1]+1 << " " << it[2]+1 << endl;
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}