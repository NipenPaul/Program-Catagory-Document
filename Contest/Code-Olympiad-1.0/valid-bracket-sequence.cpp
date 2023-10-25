#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s; cin >> s;
  stack<char> st;
  for(char &c: s){
    if(c == '['){
      st.push('[');
    }else if(c == '{'){
      st.push('{');
    }else if(c == '('){
      st.push('(');
    }else{
      if(!st.empty()){
        if(st.top() == '(' && c == ')'){
          st.pop();
        }else if(st.top() == '{' && c == '}' ){
          st.pop();
        }else if(st.top() == '[' && c == ']'){
          st.pop();
        }else{
          cout << "Not valid" << endl;
          return;
        }
      }else{
        cout << "Not valid" << endl;
        return;
      }
    }
  }  
  if(!st.empty()){
    cout << "Not valid" << endl;
  }else{
    cout << "Valid" << endl;
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