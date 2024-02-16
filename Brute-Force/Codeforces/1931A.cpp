#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
    int n; cin >> n;
    int c = min(n - 2, (int64_t) 26);
    int b = min(n - c - 1, (int64_t) 26);
    int a = n - (b + c);
    a--; b--; c--;
    char ch = 'a' + a;
    cout << ch;
    ch = 'a' + b;
    cout << ch;
    ch = 'a' + c;
    cout << ch << endl;
}
int32_t main(){
    Faster;
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution(i);
    }
    return 0;
}