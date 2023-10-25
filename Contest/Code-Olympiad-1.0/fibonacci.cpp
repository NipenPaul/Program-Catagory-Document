#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+1;
const int Mod = 1e9+7;
int dp[N];
     
int main() {
    dp[1] = 1;
    dp[2] = 1;
    int n; cin >> n;
    for(int i = 3; i <= n; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % Mod;
    }
    cout << dp[n] << endl;
    return 0;
}