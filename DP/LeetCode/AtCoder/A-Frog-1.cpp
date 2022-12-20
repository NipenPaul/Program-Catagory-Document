// iterative
void solution(int tc){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	vector<int> dp(n+1, INT_MAX);
	dp[0] = 0;
	dp[1] = abs(v[0]-v[1]);
	for(int i = 2; i < n; i++){
		dp[i] = min(dp[i-1]+abs(v[i] - v[i-1]), dp[i-2]+abs(v[i] - v[i-2]));
	}
	cout << dp[n-1] << endl;
}

// recursive
vector<int> dp;

int rec(int n, vector<int> &v){
	if(n == 0 || n == 1) return dp[n];
	if(dp[n] == INT_MAX){
		dp[n] = min(abs(v[n]-v[n-1])+rec(n-1,v), abs(v[n]-v[n-2])+rec(n-2, v));
		return dp[n];
	}
	return dp[n];
}

void solution(int tc){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	dp = vector<int>(n+1, INT_MAX);
	dp[0] = 0;
	dp[1] = abs(v[0]-v[1]);
	cout << rec(n-1, v) << endl;
}
