#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t; cin >> t;
    while(t--){
        string ch; cin >> ch;
        if(ch.size() == 2){
            cout << ch[1] << endl;
            continue;
        }
        sort(ch.begin(), ch.end());
        cout << ch[0] << endl;
    }
    return 0;
}
