#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s1, s2; cin >> s1 >> s2;
  vector<int> cnt1(26, 0), cnt2(26, 0);
  int ct1 = 0, ct2 = 0;
  for(char &c: s1){
    if(c == '@') ct1++;
    else{
      cnt1[c-'a']++;
    }
  }  
  for(char &c: s2){
    if(c == '@') ct2++;
    else{
      cnt2[c-'a']++;
    }
  }
  string s = "atcoder";
  for(int i = 0; i < 26; i++){
    if(cnt1[i] != cnt2[i]){
      bool ok = false;
      for(int k = 0; k < s.size(); k++){
        int d = s[k]-'a';
        if(i == d){
          ok = true;
          break;
        }
      }
      if(!ok){
        cout << "No" << endl;
        return;
      }
      if(cnt1[i] > cnt2[i]){
        int d = cnt1[i]-cnt2[i];
        if(d > ct2){
          cout << "No" << endl;
          return;
        }else{
          ct2 -= d;
        }
      }else{
        int d = cnt2[i]-cnt1[i];
        if(d > ct1){
          cout << "No" << endl;
          return;
        }else{
          ct1 -= d;
        }
      }
    }
  }
  cout << "Yes" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  while(t--){
    solution();
  }
  return 0;
}