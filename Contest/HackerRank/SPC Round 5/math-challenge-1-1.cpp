#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--){
        long long int i, x, n, m; cin >> n >> m;
        bool ok = false;
        for(x = 1; x <= m; x++){
            long long int ans = 0, pw = 1;
            ans = pw;
            for(i = 1; i < n; i++){
                pw *= x;
                if(pw > m){
                    break;
                }
                ans += pw;
                if(ans > m) break;
            }
            if(ans == m && i == n){
                cout << x << endl;
                ok = true;
                break;
            }
            
        }
        if(ok == false){
            cout << "undefined\n";
        }
    }
    return 0;
}
