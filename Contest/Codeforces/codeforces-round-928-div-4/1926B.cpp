#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
    int n; cin >> n;
    char ar[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ar[i][j];
        }
    }
    int toplr = -1, toplc = -1;
    int toprr = -1, toprc = -1;
    int bottomlr = -1, bottomlc = -1;
    int bottomrr = -1, bottomrc = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           // cout << ar[i][j];
            if(ar[i][j] == '1'){
                toplr = i;
                toplc = j;
                break;
            }
        }
       // cout << endl;
    }

    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(ar[i][j] == '1'){
                toprr = i;
                toprc = j;
                break;
            }
        }
    }

    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(ar[i][j] == '1'){
                bottomlr = i;
                bottomlc = j;
                break;
            }
        }
    }

    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(ar[i][j] == '1'){
                bottomrr = i;
                bottomrc = j;
                break;
            }
        }
    }
    // CHECK(toplr);
    // CHECK(toplc);
    // CHECK(toprr);
    // CHECK(toprc);
    // CHECK(bottomlr);
    // CHECK(bottomlc);
    // CHECK(bottomrr);
    // CHECK(bottomrc);
    if(toplc == bottomlc && toplr == toprr && bottomlr == bottomrr){
        cout << "SQUARE" << endl;
    }else{
        cout << "TRIANGLE" << endl;
    }
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