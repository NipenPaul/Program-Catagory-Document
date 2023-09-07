#include <bits/stdc++.h>
using namespace std;
int fx4[] = {-1,1,0,0};
int fy4[] = {0,0,-1,1};
int n, m;
int cnt(int x, int y){
  int ct = 0;
  for(int i = 0; i < 4; i++){
    int xx = x+fx4[i];
    int yy = y+fy4[i];
    if(xx >= 1 && yy >= 1 && xx <= n && yy <= m){
      ct++;
    }
  }
  return ct;
}
void solution(){
  int x1, y1, x2, y2;
  cin >> n >> m;
  cin >> x1 >> y1 >> x2 >> y2;
  int mn = INT_MAX;
  mn = min({mn, cnt(x1, y1), cnt(x2, y2)});
  cout << mn << '\n';
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