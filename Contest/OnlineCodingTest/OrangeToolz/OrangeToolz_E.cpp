/**
 * Approach: 
 * Simple math
 * 
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
  int n; cin >> n;
  cout << n*10 << endl;  
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int testCase = 1; cin >> testCase;
  while(testCase--){
    solution();
  }
  return 0;
}