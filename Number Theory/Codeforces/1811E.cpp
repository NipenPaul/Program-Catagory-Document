#include <bits/stdc++.h>
using namespace std;

void solution(){
  long long n; cin >> n;
  vector<int> v;
  while(n > 0){
    int rem = n % 9;
    if(rem >= 4) rem++;
    v.push_back(rem);
    n /= 9;
  }
  reverse(v.begin(), v.end());
  for(int &x: v){
    cout << x;
  }
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