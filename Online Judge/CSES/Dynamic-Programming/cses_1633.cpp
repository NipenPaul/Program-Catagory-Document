#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e6+1;
const int Mod = (int)1e9+7;

int dp[N];

int rec(int n){
	if(dp[n] != 0){
		return dp[n];
	}
	for(int i = 1; i <= 6; i++){
		if(n-i >= 0){
			dp[n] += rec(n-i);
			dp[n] %= Mod;
		}
	}
	return dp[n];
}

void solution(int tc){
	int n; cin >> n;
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	cout << rec(n) << endl;
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