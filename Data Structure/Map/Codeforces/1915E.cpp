#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
 int n; cin >> n;
 vector<int> v(n);
 for(int i = 0; i < n; i++){
    cin >> v[i];
 }
 map<int, int> mp;
 mp[0] = 1;
 int sum = 0;
 for(int i = 0; i < n; i++){
  if(i % 2) sum += v[i];
  else sum -= v[i];
  if(mp[sum]){
    cout << "YES" << endl;
    return;
  }
  mp[sum]++;
 }
 cout << "NO" << endl;
}
int32_t main(){
 Faster;
 int tc = 1;
 cin >> tc;
 for(int i = 1; i <= tc; i++){
  solution(i);
 }
    return 0;
}
