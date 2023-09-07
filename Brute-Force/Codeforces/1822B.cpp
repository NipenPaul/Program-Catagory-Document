#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
	int n; cin >> n;
	vector<int> pos, neg;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		if(x >= 0){
			pos.push_back(x);
		}else{
			neg.push_back(x);
		}
	}
	if(pos.size() > 0)
		sort(pos.begin(), pos.end(), greater<int>());
	if(neg.size() > 0){
		sort(neg.begin(), neg.end());
	}
	int mx = -(int)2e18;
	if(pos.size() > 1){
		mx = max(mx, pos[0]*pos[1]);
	}
	if(neg.size() > 1){
		mx = max(mx, neg[0]*neg[1]);
	}
	if(neg.size() == 1 && pos.size() == 1){
		mx = max(mx, neg[0]*pos[0]);
	}
	cout << mx << '\n';
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