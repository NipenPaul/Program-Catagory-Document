#include <bits/stdc++.h>
using namespace std;

void solution(){
  int x, y; cin >> x >> y;
  cout << "2\n";
  cout << "1" << " " << y-1 << '\n';
  cout << x << " " << y << '\n';
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