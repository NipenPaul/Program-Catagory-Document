#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
    int n; cin >> n;
    string s; cin >> s;
    int mn = n + 1, mx = -(n + 1);
    bool ok = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            mn = min(i, mn);
            mx = max(i, mx);
            ok = true;
        }
    }

    if (ok) {
     cout << mx - mn + 1 << endl;
     return;
    }

    cout << 0 << endl;
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