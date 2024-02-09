#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

bool comparator(pair<int, int> a, pair<int, int> b){
    return a.first + a.second < b.first + b.second;
}

void solution(int tc){
    int n; cin >> n;
    vector<pair<int, int>> vec(n);

    for(int i = 0; i < n; i++){
        cin >> vec[i].first;
    }

    for(int i = 0; i < n; i++){
        cin >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), comparator);

    for(int i = 0; i < n; i++){
        cout << vec[i].first << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++){
        cout << vec[i].second << " ";
    }
    cout << endl;
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