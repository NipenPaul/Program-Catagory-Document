#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    int j = i;
    if(i+1 < n){
      j = i+1;
    }
    if(a[i] < a[j]){
      for(int k = a[i]; k < a[j]; k++){
        cout << k << " ";
      }
    }else{
      for(int k = a[i]; k > a[j]; k--){
        cout << k << " ";
      }
    }
  }
  cout << a[n-1];  
  cout << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}