#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
string fun(string s, int k) {
  stack<char> st;
  int n = s.size();
  for(int i = 0; i < n; i++){
      if(st.empty()){
          st.push(s[i]);
      }else if(st.top() > s[i]){
          while(!st.empty() && st.top() > s[i] && k > 0){
              st.pop();
              k--;
          }
          st.push(s[i]);
      } else if(st.top() <= s[i]){
          st.push(s[i]);
      }
  }
  while(k > 0){
      st.pop();
      k--;
  }
  string ans = "";
  while(!st.empty()){
      ans += st.top();
      st.pop();
  }
  reverse(ans.begin(), ans.end());
  if(ans == "") return "0";
  int i = 0;
  while(ans[i] == '0') i++;
  if(i > 0) return ans.substr(i, ans.size()-i) != "" ? ans.substr(i, ans.size()-i): "0";
  return ans;
}

void solution(){
  string s; int k;
  cin >> s >> k; 
  cout << fun(s, k) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}