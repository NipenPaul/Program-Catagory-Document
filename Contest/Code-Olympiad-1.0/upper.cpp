#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
 string s; cin >> s;
 for(char &c: s){
  if(c >= 'A' && c <= 'Z'){
    cout << c;
  }else{
    int d = c;
    d -= 32;
    char ch = d;
    cout << ch;
  }
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