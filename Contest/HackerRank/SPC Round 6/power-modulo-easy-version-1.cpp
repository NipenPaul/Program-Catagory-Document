#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

ll BigMod(ll base, ll pw){
    ll ans = 1;
    while(pw > 0){
        if(pw & 1){
            ans = (ans * base);
        }
        pw >>=1L;
        base = (base*base);
    }
    return ans;
}

int main() {
    long long int n, x; cin >> n >> x;
    cout << BigMod(n, x) << endl;
    return 0;
}
