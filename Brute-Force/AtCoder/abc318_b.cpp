#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<bool>> covered(101, vector<bool>(101, false));

    for (int i = 0; i < N; i++) {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        for (int x = A; x < B; x++) {
            for (int y = C; y < D; y++) {
                covered[x][y] = true;
            }
        }
    }
    int totalArea = 0;
    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            if (covered[x][y]) {
                totalArea++;
            }
        }
    }

    cout << totalArea << endl;

    return 0;
}
