#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m, k; cin >> n >> m >> k;
  vector<int> vn(n), vm(m);
  double sum1 = 0, sum2 = 0;
  for(int i = 0; i < n; i++){
    cin >> vn[i];
    sum1 += vn[i];
  }  
  for(int i = 0; i < m; i++){
    cin >> vm[i];
    sum2 += vm[i];
  }
  double x, y;
  x = sum1/n;
  y = sum2/m;
  if(x > y){
    cout << 0 << endl;
    return;
  }
  for(int i = 1; i <= (int)1e6; i++){
    x = sum1/n;
    y = sum2/m;

    double s1 = sum1+k;
    double s2 = sum2+1;
    double xx, yy;
    xx = (sum1+k)/(n+1);
    yy = (sum2+1)/(m+1);
    if((xx-x) > (y-yy)){
      sum1 += k;
      n++;
    }else{
      sum2 += 1;
      m++;
    }

    x = sum1/n;
    y = sum2/m;
    if(x > y){
      cout << i << endl;
      return;
    }
  }
  cout << -1 << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
