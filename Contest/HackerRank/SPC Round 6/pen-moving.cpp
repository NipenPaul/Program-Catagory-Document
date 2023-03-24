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
        double  n, m, ans; cin >> n >> m;
        ans = (12*m) / (n*n);
        printf("%.4lf\n", ans);
    }
    return 0;
}
