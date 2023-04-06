#include <bits/stdc++.h>
using namespace std;

void solution(){
  int x, y; cin >> x >> y;
  int ans = (x + y);
  for(int i = 1; i <= (int)1e5; i++){
    ans = min(ans, i-1 + (x+i-1)/i + (y+i-1)/i);
  }
  cout << ans << '\n';
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
