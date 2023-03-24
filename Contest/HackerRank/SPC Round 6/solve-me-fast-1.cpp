#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t; cin >> t;
    while(t--){
        int a, b, x;
        cin >> a >> b >> x;
        if((a-b) == -(2*x) || a-b == 2*x || a == b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
