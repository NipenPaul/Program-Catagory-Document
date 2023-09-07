#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
class Pair{
public:
  int a, b;
};
bool Com(Pair x, Pair y){
  if(x.b < y.b) return true;
  return false;
}
void solution(){
  int n; cin >> n;
  vector<int> v(3*n);
  vector<Pair> vec(n+1);
  vector<int> cnt(n+1, 0);
  for(int i = 0; i < 3*n; i++){
    cin >> v[i];
    cnt[v[i]]++;
    if(cnt[v[i]] == 2){
      vec[v[i]].a = v[i];
      vec[v[i]].b = i;
    }
  }  
  sort(vec.begin(), vec.end(), Com);
  for(auto &[x, y]: vec){
    if(x != 0)
      cout << x << " ";
  }
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