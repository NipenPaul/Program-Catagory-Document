#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
    int n, m, k; cin >> n >> m >> k;
    set<int> setN, setM, setNM;

    for(int i = 0; i < n ; i++){
        int num; cin >> num;
        if(k >= num){
            setN.insert(num);
        }
    }

    for(int i = 0; i < m ; i++){
        int num; cin >> num;
        if(k >= num){
            setM.insert(num);
        }
    }

    if(setN.size() < k/2 || setM.size() < k/2){
        cout << "NO" << endl;
        return;
    }

    for(int x: setN){
        setNM.insert(x);
    }

    for(int x: setM){
        setNM.insert(x);
    }

    if(setNM.size() == k){
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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