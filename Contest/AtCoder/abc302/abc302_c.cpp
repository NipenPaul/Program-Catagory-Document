#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
int used[20], number[20];

vector<vector<int>> per;
void permutation(int at, int n){
  if(at == n+1){
    vector<int> v;
    for(int i = 1; i <= n; i++){
      v.push_back(number[i]-1);
    }
    per.push_back(v);
    return;
  }
  for(int i = 1; i <= n; i++){
    if(!used[i]){
      used[i] = 1;
      number[at] = i;
      permutation(at+1, n);
      used[i] = 0;
    }
  }
}
void solution(){
  int n, m; cin >> n >> m;
  permutation(1, n);
  vector<string> vec(n);
  for(int i = 0; i < n; i++){
    cin >> vec[i];
  }
  for(auto &it: per){
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
      string s1 = vec[it[i]];
      string s2 = vec[it[i+1]];
      int ct = 0;
      for(int j = 0; j < m; j++){
        if(s1[j] != s2[j]){
          ct++;
        }
      }
      if(ct == 1) cnt++;
    }
    if(cnt == n-1){
      cout << "Yes" << endl;
      return;
    }
  }
  cout << "No" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}