#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)2e5+1;

int dp[N];

int digit(int n){
    int sum  = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void pre(){
    for(int i = 1; i < N; i++){
        dp[i] = dp[i-1] + digit(i);
    }
}

void solution(int tc){
    int n; cin >> n;
    cout << dp[n] << endl;
}
int32_t main(){
    Faster;
    int tc = 1;
    cin >> tc;
    pre();
    for(int i = 1; i <= tc; i++){
        solution(i);
    }
    return 0;
}