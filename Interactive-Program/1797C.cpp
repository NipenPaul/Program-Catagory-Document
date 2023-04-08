#include <bits/stdc++.h>
using namespace std;

int askQuery(int x, int y){
  cout << "? " << x << " " << y << '\n';
  int d; cin >> d;
  cout.flush();
  return d;
}
void solution(){
  int r, c; cin >> r >> c;
  int d = askQuery(1, 1);
  int mnr = min(r, d+1), mnc = min(c, d+1);
  int dd = askQuery(mnr, mnc);
  if(mnr-dd > 0 && askQuery(mnr-dd, mnc) == 0){
    cout << "! " << mnr-dd << " " << mnc << '\n';
  }else{
    cout << "! " << mnr << " " << mnc-dd << '\n';
  }
  cout.flush();
}
int main(){
  //ios::sync_with_stdio(false);
  //cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}
