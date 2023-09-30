/**
 * Approach: 
 * Simple obserbation, just track the string lenght and check it grater or less the 10
 * Complexity
 * Time complexity: O(1)
 * Space complexity: O(1)
 **/

#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
void solution(){
  string s; cin >> s;
  int len = s.size();
  if(len <= 10){
    cout << s << endl;
  }else{
    cout << s[0] << len-2 << s[len-1] << endl;
  }
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int testCase = 1; cin >> testCase;
  while(testCase--){
    solution();
  }
  return 0;
}