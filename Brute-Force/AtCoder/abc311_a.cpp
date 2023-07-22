#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  int cnt1 = 0, cnt2 = 0, cnt3 = 0;
  for(int i = 0; i < n; i++){
    if(ch[i] == 'A'){
      cnt1 = 1;
    }
    if(ch[i] == 'B'){
      cnt2 = 1;
    }
    if(ch[i] == 'C'){
      cnt3 = 1;
    }
    if(cnt1 == 1 && cnt2 && cnt3){
      cout << i+1 << endl;
      return;
    }
  } 
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}