#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int H, W;
  cin >> H >> W;
  vector<string> A(H), B(H);
  for (auto& x : A) cin >> x;
  for (auto& x : B) cin >> x;
  for (int s = 0; s < H; s++) {
    for (int t = 0; t < W; t++) {
      int ok = 1;
      for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
          if (A[(i - s + H) % H][(j - t + W) % W] != B[i][j]) ok = 0;
        }
      }
      if (ok) {
        cout << "Yes" << endl;
        exit(0);
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