#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
int binaryToDecimal(vector<int>&v){
  int pw = 1, val = 0;
  for(int &x: v){
    val += (x * pw);
    pw *= 2;
  }
  return val;
}
void solution(){
  int x; cin >> x;
  vector<int> a(31, 0), b(31, 0), ab(31, 0);
  int tem = x;
  int i = 0;
  bool ok = true;
  while(tem != 0){
    ab[i] = tem % 2;
    if(tem % 2){
      if(ok){
        a[i] = 1;
        ok = false;
      }else{
        b[i] = 1;
        ok = true;
      }
    }
    tem /= 2;
    i++;
  } 
  int pw = pow(2, 30);
  for(int i = 30; i >= 0; i--){
    if(a[i] == 0 && b[i] == 0 && (pw+pw) <= x){
      x -= (pw+pw);
      a[i] = 1;
      b[i] = 1;
    }
    pw /= 2;
  }
  if(x > 0){
    cout << -1 << endl;
    return;
  }
  cout << binaryToDecimal(a) << " " << binaryToDecimal(b) << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
