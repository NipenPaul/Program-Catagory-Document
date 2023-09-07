#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  deque<char> de;
  int ct = 0;
  for(int i = 0; i < n; i++){
    if(ch[i] == '(') ct++;
    if(ch[i] == ')' && ct > 0){
      while(de.back() != '('){
        de.pop_back();
      }
      de.pop_back();
      ct--;
    }else{
      de.push_back(ch[i]);
    }
  }  
  for(char &c: de){
    cout << c;
  }
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
