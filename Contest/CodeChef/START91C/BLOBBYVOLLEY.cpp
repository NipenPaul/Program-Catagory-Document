#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  int a = 0, b = 0;
  bool ok = true;
  for(int i = 0; i < n; i++){
    if(ok && ch[i] == 'A'){
      ok = true;
      a++;
    }else if(ok && ch[i] == 'B'){
      ok = false;
    }else if(!ok && ch[i] == 'B'){
      ok = false;
      b++;
    }else if(!ok && ch[i] == 'A'){
      ok = true;
    }
  }
  cout << a << " " << b << endl; 
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}