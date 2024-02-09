#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

int bin(vector<int> &v, int num){
    int low = 0, high = v.size() - 1, ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(v[mid] == num){
            ans = mid;
            high = mid - 1;
        }else if(v[mid] > num){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return ans;
}

void solution(int tc){
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> diff(n);
    diff[0] = 1;
    for(int i = 1; i < n; i++){
        if(v[i - 1] == v[i]){
            diff[i] = diff[i - 1];
        }else{
            diff[i] = diff[i - 1] + 1;
        }
    }

    int q; cin >> q;
    while (q--){
        int l, r; cin >> l >> r;
        l--; r--;
        if(diff[l] == diff[r]){
            cout << "-1 -1" << endl;
            continue;
        }

        cout << l + 1 << " ";
        cout << bin(diff, diff[l] + 1) + 1 << endl;
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