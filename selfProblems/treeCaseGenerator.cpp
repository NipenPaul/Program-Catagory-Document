#include <bits/stdc++.h>
using namespace std;

// Function to generate random queries
void generate_queries(int n, int q) {
    // Random number generator
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    // Print n and edges
    cout << n << endl;
    for(int i=2;i<=n;i++) {
        uniform_int_distribution<int> dist(1, i-1);
        int parent = dist(rng);
        cout << parent << " " << i << endl;
    }

    // Print q and queries
    cout << q << endl;
    for(int i=1;i<=q;i++) {
        uniform_int_distribution<int> dist(1, n);
        int u = dist(rng), v = dist(rng);
        while(u == v) {
            v = dist(rng);
        }
        cout << u << " " << v << endl;
    }
}

int main() {
    // Set random seed
    freopen("input.txt","w", stdout);
    srand(time(0));

    // Generate test case with n=5, q=3
    generate_queries(100000, 100000);

    return 0;
}
