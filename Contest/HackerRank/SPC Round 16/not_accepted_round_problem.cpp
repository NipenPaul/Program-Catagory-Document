#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s; cin >> s;
  int i = 0;
  int n = s.size();
  int j = n-1;
  set<char> se;
  while(i < j){
    int cnt1 = 0, cnt2 = 0;
    if(i+1 < n && s[i] == '1' && s[i+1] == '0'){
      i += 2;
      cnt1++;
    }
    if(j-1 >= 0 && s[j] == '1' && s[j-1] == '0'){
      j -= 2;
      cnt2++;
    }
    if(cnt1 == 1 && cnt2 == 1){
      se.insert('a');
    }
    else if(cnt1 == 0 && cnt2 == 0){
        if(s[i] == s[j]){
          se.insert(s[i]);
        }
        i++;
        j--;
    }else if(cnt1 == 1){
      j--;
    }else if(cnt2 == 1){
      i++;
    }
  } 
  if(n % 2 == 1){
    se.insert(s[i]);
  }
  cout << se.size() << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
