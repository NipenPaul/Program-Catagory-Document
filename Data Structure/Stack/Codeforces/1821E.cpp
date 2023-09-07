#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int k; cin >> k;
  string ch; cin >> ch;
  stack<int> st;
  vector<int> v;
  for(int i = 0; i < ch.size(); i++){
    if(ch[i] == '('){
      st.push(i);
    }else{
      v.push_back(i-st.top()-1);
      st.pop();
    }
  }
  sort(v.begin(), v.end());
  while(k--){
    if(!v.empty()){
      v.pop_back();
    }
  }
  int ans = 0;
  for(int &x: v) ans += (x/2);
  cout << ans << '\n';
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
