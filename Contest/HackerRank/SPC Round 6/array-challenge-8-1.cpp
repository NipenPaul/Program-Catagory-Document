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
        int n; cin >> n;
        map<int, int> mp;
        bool ok = true;
        for(int i = 0; i < 2*n; i++){
          int x;  cin >> x;
          mp[x]++;
          if(mp[x] > 2){
              ok = false;
          }
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    return 0;
}
