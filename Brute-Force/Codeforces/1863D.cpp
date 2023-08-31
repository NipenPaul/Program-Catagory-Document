#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  int n, m; cin >> n >> m;
  string s[n];
  for(int i = 0; i < n; i++){
    cin >> s[i];
  }

  int k1, k2;
  for(int j = 0; j < m-1; j++){
    k1 = 0;
    for(int i = 0; i < n; i++){
      if(s[i][j] == 'L'){
        if(k1 % 2 == 0){
          s[i][j] = 'W';
          s[i][j+1] = 'B';
        }else{
          s[i][j] = 'B';
          s[i][j+1] = 'W';
        }
        k1++;
      }
    }
  }

   for(int i = 0; i < n-1; i++){
    k2 = 0;
    for(int j = 0; j < m; j++){
      if(s[i][j] == 'U'){
        if(k2 % 2 == 0){
          s[i][j] = 'W';
          s[i+1][j] = 'B';
        }else{
          s[i][j] = 'B';
          s[i+1][j] = 'W';
        }
        k2++;
      }
    }
  }


  for(int i = 0; i < n; i++){
    int b = 0, w = 0;
    for(int j = 0; j < m; j++){
      if(s[i][j] == 'B'){
        b++;
      }else if(s[i][j] == 'W'){
        w++;
      }
    }
    if(b != w){
      cout << -1 << endl;
      return;
    }
  }

  for(int i = 0; i < m; i++){
    int b = 0, w = 0;
    for(int j = 0; j < n; j++){
      if(s[j][i] == 'B'){
        b++;
      }else if(s[j][i] == 'W'){
        w++;
      }
    }
    if(b != w){
      cout << -1 << endl;
      return;
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << s[i][j];
    }
    cout << endl;
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