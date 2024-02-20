#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
    string ch; cin >> ch;
    int a = 0, b = 0;
    for(char &c: ch){
        if(c == 'A') a++;
        else b++;
    }
    if(a > b){
        cout << "A" << endl;
    }else{
        cout << "B" << endl;
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