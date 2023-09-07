#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> v(n+5, 0);
    v[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(i-j >= 0){
                v[i] = v[i] + v[i-j];
            }
        }
    }
    cout << v[n] << endl;
    return 0;
}
