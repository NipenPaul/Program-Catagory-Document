#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  double a, b, c; cin >> a >> b >> c;
  double s = (a+b+c)/2;
  double area = sqrt(s*(s-a)*(s-b)*(s-c));
  printf("%.2lf\n", area); 
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}