#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n; cin >> n;
    long long int pw = 1;
    int k = 1;
    while(pw*k <= n){
        pw = pw * k;
        k++;
    }
    k--;
    //cout << k << endl;
    double ans = k /2.0;
    printf("%.2lf\n", ans);
    return 0;
}
