#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	int n, k; cin >> n >> k;
	deque<int> de(n);
	for(int &it: de) cin >> it;
	multiset<int, greater<int>> mse;
	for(int i = 0; i < k; i++){
		mse.insert(de[i]);
	}
	cout << *mse.begin() << " ";
	for(int i = k; i < n; i++){
		mse.erase(mse.find(de[i-k]));
		mse.insert(de[i]);
		cout << *mse.begin() << " ";
	}
	cout << endl;
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