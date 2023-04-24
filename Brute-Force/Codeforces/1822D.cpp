#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
	int n; cin >> n;
	if(n == 1){
		cout << 1 << '\n';
		return;
	}
	if(n & 1){
		cout << -1 << '\n';
		return;
	}
  int r = n, l = 1;
	for(int i = 1; i <= n/2; i++){
    cout << r << " " << l << " ";
    r -= 2;
    l += 2;
  }
  cout << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
  return 0;
}
