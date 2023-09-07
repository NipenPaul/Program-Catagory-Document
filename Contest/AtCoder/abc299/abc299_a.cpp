#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  string s; cin >> s;
  vector<int> v;
  int ind = 0;
  for(int i = 0; i < n; i++){
    if(s[i] == '|'){
      v.push_back(i);
    }else if(s[i] == '*'){
      ind = i;
    }
  }
  if(v[0] < ind && ind < v[1]){
    cout << "in\n";
  }else{
    cout << "out\n";
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  //cin >> t;
  while(t--){
    solution();
  }
}