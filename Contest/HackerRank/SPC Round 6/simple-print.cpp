#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    vector<int> v;
    while(n){
        v.push_back(n%2);
        n /= 2;
    }
    reverse(v.begin(), v.end());
    for(int &x: v) cout <<x;
    cout << endl;
    return 0;
}
