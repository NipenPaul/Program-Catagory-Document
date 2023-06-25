#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

bool isPailndrome(string &s){
  int i = 0;
  int j = s.size()-1;
  while(i < j){
    if(s[i] != s[j]){
      return false;
    }
    i++;
    j--;
  }
  return true;
}
void solution(){
  int n; cin >> n;
  string ch[n];
  for(int i = 0; i < n; i++){
    cin >> ch[i];
  }
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      string tem = ch[i]+ch[j];
      if(isPailndrome(tem)){
        cout << "Yes" << endl;
        return;
      }
      tem = ch[j]+ch[i];
      if(isPailndrome(tem)){
        cout << "Yes" << endl;
        return;
      }
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