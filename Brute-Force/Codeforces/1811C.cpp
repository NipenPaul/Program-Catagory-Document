#include <bits/stdc++.h>
using namespace std;

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n-1; i++){
    cin >> v[i];
  }
  cout << v[0] << " ";
  for(int i = 0; i < n-2; i++){
    cout << min(v[i], v[i+1]) << " ";
  }
  cout << v[n-2] << '\n';
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