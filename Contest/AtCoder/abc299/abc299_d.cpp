#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int l = 1, r = n;
    int ans = l;
    while (l < r) {
        int mid = (l + r) / 2;

        cout << "? " << mid << endl;
        int val;
        cin >> val;

        if (val == 1) {
            r = mid;
        } else {
            ans = mid;
            l = mid + 1;
        }
    }

    cout << "! " << ans << endl;
    return 0;
}
