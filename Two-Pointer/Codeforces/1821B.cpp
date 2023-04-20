#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  std::vector<int> a(n), b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  int l = 0, r = 0;
  for(int i = 0; i < n; i++){
    if(a[i] != b[i]){
      l = i;
      break;
    }
  }
  for(int i = n-1; i >= 0; i--){
    if(a[i] != b[i]){
      r = i;
      break;
    }
  }
  while(l-1 >= 0 && a[l-1] == b[l-1] && b[l] >= b[l-1]){
    l--;
  }
   while(r+1 < n && a[r+1] == b[r+1] && b[r] <= b[r+1]){
    r++;
  }
  cout << l+1 << " " << r+1 << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}
