#include <bits/stdc++.h>
#define endl '\n'
#define Int long long int
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

#include <ext/rope>
using namespace std;
using namespace __gnu_cxx;

const int N = (int)1e5+5;

void solution(int tc){
	int n, q; cin >> n >> q;
	rope<int> v;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}

	auto print = [&](){
		for(auto it: v) cout << it << " ";
		cout << endl;
	};

	while(q--){
		int t, k, x; cin >> t >> k;
		if(t == 1){
			cin >> x;
			v.insert(k-1, x);
			// print();
		}else if(t == 2){
			v.erase(k-1, 1);
			// print();
		}else{
			cout << v[k-1] << endl;
		}
	}
}
int32_t main(){
	Faster;
	int tc = 1; 
	//cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}