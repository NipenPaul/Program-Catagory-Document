#include <bits/stdc++.h>
using namespace std;

void solution(){
  int n, s1, s2; cin >> n >> s1 >> s2;
  vector<pair<int, int>> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i].first;
    v[i].second = i+1;
  }
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  vector<int> v1, v2;
  int x1 = s1, x2 = s2;
  for(int i = 0; i < n; i++){
    if(x1 < x2){
      v1.push_back(v[i].second);
      x1 += s1;
    }else{
      v2.push_back(v[i].second);
      x2 += s2;
    }
  }
  cout << v1.size() << " ";
  for(int &x: v1) cout << x << " ";
  cout << '\n';
  cout << v2.size() << " ";
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
