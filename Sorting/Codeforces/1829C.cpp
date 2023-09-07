#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> both, v1, v2;
  for(int i = 0; i < n; i++){
    int m; cin >> m;
    string ch; cin >> ch;
    if(ch == "11"){
      both.push_back(m);
    }else if(ch == "10"){
      v1.push_back(m);
    }else if(ch == "01"){
      v2.push_back(m);
    }
  }
  int ans = 1e18; 
  if(!both.empty()){
    sort(both.begin(), both.end());
    ans = min(ans, both[0]);
  }
  int m = 0;
  int cnt = 0;
  if(!v1.empty()){
    sort(v1.begin(), v1.end());
    m = v1[0];
    cnt++;
  } 
  if(!v2.empty()){
    sort(v2.begin(), v2.end());
    m += v2[0];
    cnt++;
  }  
  if(cnt == 2){
    ans = min(m, ans);
  }
  if(ans == (int)1e18){
    cout << -1 << endl;
  }else{
    cout << ans << endl;
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