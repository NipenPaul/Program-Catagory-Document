#include <bits/stdc++.h>
using namespace std;

void solution(){
  long long n, x1, y1, x2, y2;
  cin >> n >> x1 >> y1 >> x2 >> y2;

  long long ax1 = min(x1, n-x1+1);
  long long ax2 = min(x2, n-x2+1);
  long long ay1 = min(y1, n-y1+1);
  long long ay2 = min(y2, n-y2+1);

  long long x = min(ax1, ay1);
  long long y = min(ax2, ay2);

  cout << abs(x-y) << endl;
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