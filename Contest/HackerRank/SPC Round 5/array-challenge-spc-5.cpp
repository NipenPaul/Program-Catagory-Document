#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n; cin >> n;
    vector<long long int> v(n), cum(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        cum[i] = cum[i-1]+v[i-1];
    }
    long long int mx = 0;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n-1){
            mx = max(v[i]*n, mx);
        }else{
            int l = i+1;
            mx = max((v[i]*l)+(cum[n]-cum[i+1]), mx);
            int r = n-l+1;
           // cout << "i = " << i << ", ";
           // cout << "r = " << r << ", ";
            //cout << "cum = " << cum[i] << ", ";
           // cout << "v = " << v[i] << ", ";
            mx = max((v[i]*r)+cum[i], mx);
            //cout << "mx = " << mx << endl;
        }
       // cout << mx << endl;
    }
    cout << mx << endl;
    return 0;
}
