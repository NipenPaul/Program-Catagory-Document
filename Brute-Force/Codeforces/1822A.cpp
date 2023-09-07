#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
    int n, t; cin >> n >> t;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int ind = -1, mx = 0;
    for(int i = 0; i < n; i++){
        if(t >= a[i]+i){
            if(mx < b[i]){
                mx = b[i];
                ind = i+1;
            }
        }
    }
    cout << ind << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
  return 0;
}