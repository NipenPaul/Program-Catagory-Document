#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

bool isVowel(char c){
  return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
void solution(){
  int n, k; cin >> n >> k;
  string s; cin >> s;
  int cnt = 0;
  for(char &c: s){
    if(isVowel(c)) cnt++;
  }
  if(k >= cnt && cnt % k != 0){
    cout << 0 << endl;
    return;
  }
  vector<int> v;
  cnt = 0;
  for(int i = 0; i < n; i++){
    if(isVowel(s[i])) cnt++;
    if(cnt == k){
      int ct = 1;
      i++;
      while(i < n && isVowel(s[i]) != true){
        ct++;
        i++;
      }
      i--;
      v.push_back(ct);
      cnt = 0;
    }
  }
  int ans = 1;
  int mod = 1e9+7;
  for(int i = 0; i < v.size()-1; i++){
    ans = (ans * v[i]) % mod;
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
