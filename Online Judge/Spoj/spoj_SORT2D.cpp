#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	int n; cin >> n;
	std::vector<pair<int, int>> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(),[](pair<int, int>a, pair<int, int> b){
		if(a.first < b.first) return true;
		if(a.first == b.first){
			if(a.second > b.second) return true;
		}
		return false;
	});
	for(auto it: v){
		cout << it.first << " " << it.second << endl;
	}
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