#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  string ch; cin >> ch;
  int cnt0 = 0, cnt1 = 0;
  for(int i = 0; i < n; i++){
    if(ch[i] == '0'){
      cnt0++;
    }else{
      cnt1++;
    }
  }
  int cnt = min(cnt1, cnt0);
  if(cnt % 2 == 0){
    cout << "Ramos\n";
  }else{
    cout << "Zlatan\n";
  }
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}
