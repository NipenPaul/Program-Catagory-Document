#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

template<typename T>
T mySqrt(T n){
  T lo = 0.0, hi = (T)1e9+1, ans = 0.0;
  for(int i = 0; i < 100; i++){
    T mid = (lo+hi)/2.0;
    if(mid*mid <= n){
      ans = mid;
      lo = mid;
    }else{
      hi = mid;
    }
  }
  return ans;
}

void solution(){
  int n; cin >> n;
  if(n == 1){
    cout << -1 << '\n';
    return;
  }
  int s = mySqrt(n-1);
  int d = n - (s*s);
  int p = s*s+d;
  int N = 1e6;
  if(N < n){
    int a = 1e6;
    int b = (n-1) / a;
    int c = n - (a*b);
    cout << a << " " << b << " " << c << '\n';
    //cout << a*b+c << endl;
    return;
  }
  cout << s << " " << s << " " << d << '\n';
}
int32_t main(){
  //ios::sync_with_stdio(false);
  //cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
  return 0;
}