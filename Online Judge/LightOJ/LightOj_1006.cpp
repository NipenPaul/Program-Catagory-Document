#include<bits/stdc++.h>
#define ll long long
#define mx 10005
#define mod 10000007

using namespace std;

ll dp[mx];

ll a, b, c, d, e, f;
ll fn( ll n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
	if( n == 3 ) return d;
    if( n == 4 ) return e;
	if( n == 5 ) return f;

    if(dp[n] == -1){
    dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) +     fn(n-6));
    dp[n] = dp[n] % mod;
    return dp[n];
    }
    else return dp[n];
}

int main() {
    ll n, caseno = 0, cases;
    cin >>cases;
    while( cases-- ) {

    memset(dp, -1, sizeof(dp));

    cin >> a >> b >> c >> d >> e >> f >> n;
	cout << "Case " << ++caseno << ": " << (fn(n) % mod)  << '\n';

    }
    return 0;
}
