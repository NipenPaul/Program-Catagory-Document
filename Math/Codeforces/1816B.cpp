#include <bits/stdc++.h>
using namespace std;

void solution(){
  int n; cin >> n;
  vector<int> v1, v2;
  int k = 2*n;
  int l = 1;
  for(int i = 0; i < n; i++){
    if(i%2 == 0){
      v1.push_back(k);
      v2.push_back(l);
    }else{
      v1.push_back(l);
      v2.push_back(k);
    }
    k--;
    l++;
  }
  swap(v2[n-1], v2[1]);
  for(int &x: v1) cout << x << " ";
  cout << '\n';
  for(int &x: v2) cout << x << " ";
  cout << '\n';
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