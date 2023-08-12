#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
string s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
int n; cin >> n;
cout << "3.";
for(int i = 0; i < n; i++){
  cout << s[i];
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