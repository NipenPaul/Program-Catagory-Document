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
  if(x.b > y.b) return true;
  if(x.b == y.b){
    if(x.a < y.a) return true;
    return false;
  }
  return false;
}
void solution(){
  int n; cin >> n;
  vector<Pair> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i].a;
    int x = v[i].a;
    int len = 0;
    while(x != 0){
      x /= 10;
      len++;
    }
    v[i].b = len;
  }  
  sort(v.begin(), v.begin()+n,Com);
  for(auto &[x, y]: v) cout << x << " ";
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
