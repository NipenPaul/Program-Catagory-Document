#include <bits/stdc++.h>
using namespace std;

void solution(){
  int n; cin >> n;
  int d; cin >> d;
  string ch; cin >> ch;
  bool ok = false;
  for(int i = 0; i < n; i++){
    if(d > (ch[i]-'0') && !ok){
      cout << d;
      ok = true;
    }
    cout << ch[i];
  }
  if(!ok) cout << d;
  cout << '\n';
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}