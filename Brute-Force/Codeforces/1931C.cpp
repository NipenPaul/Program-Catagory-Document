#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int mx = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == v[0]) cnt1++;
        else break;
    }

    mx = max(mx, cnt1);

    int cnt2 = 0;
    for(int i = n - 1; i >= 0; i--){
        if(v[i] == v[n-1]) cnt2++;
        else break;
    }

    mx = max(mx, cnt2);

    int cnt = 0;
    int i = 0;
    while(i < n && v[i] == v[0]){
        i++;
        cnt++;
    }

    int j = n-1;
    while(i <= j && v[j] == v[0]){
        j--;
        cnt++;
    }
    mx = max(mx, cnt);
    cout << n - mx << endl;
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