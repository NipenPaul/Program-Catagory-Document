#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
   int n; cin >> n;
   string s; cin >> s;
   int a = 0, t = 0;
   for(char &c: s){
    if(c == 'A') a++;
    else t++;
   }
   if(a > t){
    cout << "A" << endl;
   }else if(t > a){
    cout << "T" << endl;
   }else{
    if(s[n-1] == 'A'){
      cout << "T" << endl;
    }else{
      cout << "A" << endl;
    } 
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