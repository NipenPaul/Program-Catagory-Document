#include "bits/stdc++.h"
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false); cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int) 1e5 + 5;

void solution(int tc) {
    int n; cin >> n;
    map<int, int> cnt;
    int ans = 0;
    for (int i = 0, x; i < n; ++i) {
        cin >> x;
        if (!cnt[x]) {
            ans++;
            cnt[(((int)1 << (int) 31) - (int) 1) ^ x]++;
        }
        else {
            cnt[x]--;
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    Faster;
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        solution(i);
    }

    return 0;
}