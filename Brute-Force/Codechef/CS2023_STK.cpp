#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  } 
  for(int i = 0; i < n; i++){
    cin >> b[i];
  }
  int cnt1 = 0, cnt2 = 0;
  int ct = 0;
  for(int i = 0; i < n; i++){
    if(a[i] == 0){
      cnt1 = max(ct, cnt1);
      ct = 0;
    }else{
      ct++;
    }
  }
  cnt1 = max(ct, cnt1);
  ct = 0;
  for(int i = 0; i < n; i++){
    if(b[i] == 0){
      cnt2 = max(ct, cnt2);
      ct = 0;
    }else{
      ct++;
    }
  }
  cnt2 = max(ct, cnt2);

  if(cnt2 == cnt1){
    cout << "Draw" << endl;
  }else if(cnt1 > cnt2){
    cout << "Om" << endl;
  }else{
    cout << "Addy" << endl;
  }

}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}