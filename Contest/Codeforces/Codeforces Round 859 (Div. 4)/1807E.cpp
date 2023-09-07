/**
   Hare Krishna Hare Krishna, Krishna Krishna Hare Hare
   Hare Rama Hare Rama, Rama Rama Hare Hare (Reapeat)
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define check(x) cout << (#x) << " is " << (x) << endl;

#include <ext/rope>
using namespace __gnu_cxx;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> order_set;

int fx4[] = {-1,1,0,0};
int fy4[] = {0,0,-1,1};
int fx8[] = {-1,-1,-1,0,1,1,1,0};
int fy8[] = {-1,0,1,1,1,0,-1,-1};

/** ------Remind Of--------
priority_queue <int, vector<int>, greater<int> > mpq;
priority_queue<int> pq;
list<int> lst;
vector<int> v;
set<int> se; multiset<int> mse;
queue<int> que; deque<int> dque;
stack<int> st;
rope<int> rp; O(logn)
order_set s; // pbds
map <int, int> ma;
for (auto &[key, val] : ma){ }
pair<int, int> pp;
unordered
Lamda funtion
auto print = [&](int i){ };
memset(arr,-1,sizeof(arr));

graph, dsu, dp, number theory, math, binary search
bitmask, combinator, divide and conquer, recursion
data structure, implementation, adhoc, constructive
string, geometry
*/

/**----------Solution Start---------*/
#define PI acos(-1.0)
#define ll long long int
const int Mod = (int) 1e9+7;
const int N = (int) 1e5+5;


void solution(int tc){
    int n; cin >> n;
    vector<int> v(n), cum(n+5);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 1; i <= n; i++){
        cum[i] = cum[i-1] + v[i-1];
    }
    int l = 1, r = n, ans;
    while(l <= r){
        int m = (l+r)/2;
        cout << "? " << m << " ";
        for(int i = 1; i <= m; i++){
            cout << i << " ";
        }
        int value; cin >> value;
        if(value > cum[m]){
            ans = m;
            r = m-1;
        }else{
            l = m+1;
        }
    }
    cout << "! " << ans << endl;
}


int main(){
    //Faster;
    int tc = 1; 
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution(i);
    }
    cout.flush();
    return 0;
}