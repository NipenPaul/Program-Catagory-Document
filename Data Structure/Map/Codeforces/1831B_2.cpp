#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

void solution(){
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }  
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  int mx = 0;
  vector<int> cnta(2*n+1, 0), cntb(2*n+1, 0);
  int cnt = 1;
  for(int i = 1; i < n; i++){
    if(a[i] == a[i-1]){
      cnt++;
    }else{
      cnta[a[i-1]] = max(cnt, cnta[a[i-1]]);
      cnt = 1;
    }
  }
  cnta[a[n-1]] = max(cnt, cnta[a[n-1]]);
  cnt = 1;
  for(int i = 1; i < n; i++){
    if(b[i] == b[i-1]){
      cnt++;
    }else{
      cntb[b[i-1]] = max(cnt, cntb[b[i-1]]);
      cnt = 1;
    }
  }
  cntb[b[n-1]] = max(cnt, cntb[b[n-1]]);
  for(int i = 0; i < n; i++){
    mx = max(mx, cnta[a[i]]+cntb[a[i]]);
    mx = max(mx, cnta[b[i]]+cntb[b[i]]);
  }
  cout << mx << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}