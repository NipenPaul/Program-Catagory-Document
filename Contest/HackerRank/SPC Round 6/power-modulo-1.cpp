#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int
ll BigMod(ll base, ll pw, ll Mod){
    ll ans = 1;
    while(pw > 0){
        if(pw & 1){
            ans = (ans * base) % Mod;
        }
        pw >>=1L;
        base = (base*base) % Mod;
    }
    return ans;
}


int main() {
    long long int n, x; cin >> n >> x;
    cout << BigMod(n, x, (long long int)1e9);
    return 0;
}
