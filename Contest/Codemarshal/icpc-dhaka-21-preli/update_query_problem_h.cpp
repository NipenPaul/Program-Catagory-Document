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
#define Int long long int
const int Mod = (int) 1e9+7;
const int N = (int) 2e5+5;

string s1, s2;

int freq[4*N][30];
int hold[4*N];
int freq2[4*N][30];
int hold2[4*N];

void update(int node, int b, int e, int l, int r, int key){

    if (l > e || r < b)
        return;

    if (b >= l && e <= r) //Full range interset
    {
        int len = (e-b+1);
        for(int i = 0; i < 26; i++){
        	freq[node][i] = 0;
        }
        freq[node][key] = len;
        hold[node] = key;
        return;
    }

    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    if(hold[node] != -1){
    	update(Left, b, mid, b, mid, hold[node]);
    	update(Right, mid + 1, e, mid+1, e, hold[node]);
    	hold[node] = -1;
    }

    update(Left, b, mid, l, r, key);
    update(Right, mid + 1, e, l, r, key);

    for(int i = 0; i < 26; i++){
    	freq[node][i] = freq[Left][i] + freq[Right][i];
    }
}

vector<int> query(int node, int b, int e, int l, int r){
	vector<int> v(26, 0);

	if (l > e || r < b)
        return v;

    if (b >= l && e <= r) //Full range interset
    {
        for(int i = 0; i < 26; i++){
        	v[i] = freq[node][i];
        }
        return v;
    }

    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    if(hold[node] != -1){
    	update(Left, b, mid, b, mid, hold[node]);
    	update(Right, mid + 1, e, mid+1, e, hold[node]);
    	hold[node] = -1;
    }


    vector<int> v1, v2;
    v1 = query(Left, b, mid, l, r);
    v2 = query(Right, mid + 1, e, l, r);

    for(int i = 0; i < 26; i++){
    	v[i] = v1[i] + v2[i];
    }
    return v;
}

void update2(int node, int b, int e, int l, int r, int key){

    if (l > e || r < b)
        return;

    if (b >= l && e <= r) //Full range interset
    {
        int len = (e-b+1);
        for(int i = 0; i < 26; i++){
        	freq2[node][i] = 0;
        }
        freq2[node][key] = len;
        hold2[node] = key;
        return;
    }

    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    if(hold2[node] != -1){
    	update2(Left, b, mid, b, mid, hold2[node]);
    	update2(Right, mid + 1, e, mid+1, e, hold2[node]);
    	hold2[node] = -1;
    }

    update2(Left, b, mid, l, r, key);
    update2(Right, mid + 1, e, l, r, key);

    for(int i = 0; i < 26; i++){
    	freq2[node][i] = freq2[Left][i] + freq2[Right][i];
    }
}

vector<int> query2(int node, int b, int e, int l, int r){
	vector<int> v(26, 0);

	if (l > e || r < b)
        return v;

    if (b >= l && e <= r) //Full range interset
    {
        for(int i = 0; i < 26; i++){
        	v[i] = freq2[node][i];
        }
        return v;
    }

    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    if(hold2[node] != -1){
    	update2(Left, b, mid, b, mid, hold2[node]);
    	update2(Right, mid + 1, e, mid+1, e, hold2[node]);
    	hold2[node] = -1;
    }


    vector<int> v1, v2;
    v1 = query2(Left, b, mid, l, r);
    v2 = query2(Right, mid + 1, e, l, r);

    for(int i = 0; i < 26; i++){
    	v[i] = v1[i] + v2[i];
    }
    return v;
}



void solution(int tc){


	cin >> s1 >> s2;

	int n = s1.size();
	int m = s2.size();
	int len = max(n, m);
	len = len * 4 + 2;
	for(int i = 0; i < len; i++){
		for(int j = 0; j <= 30; j++){
			freq[i][j] = 0;
		}
	}
	memset(hold, -1, sizeof(hold));

	for(int i = 0; i < n; i++){
		update(1, 1, n, i+1, i+1, s1[i]-'a');
	}

	for(int i = 0; i < m; i++){
		update2(1, 1, m, i+1, i+1, s2[i]-'a');
	}

	int q; cin >> q;
	while(q--){
		int t; cin >> t;
		if(t == 1){
			int l, r; char c;
			cin >> l >> r >> c;
			update(1, 1, n, l, r, c-'a');
			//check(l); check(r); check(c);
		}
		else if(t == 2){
			int l, r; char c;
			cin >> l >> r >> c;
			update2(1, 1, m, l, r, c-'a');
		}
		else{
			int l1, r1, l2, r2;
			cin >> l1 >> r1 >> l2 >> r2;
			//check(l1); check(r1); check(l2); check(r2);
			vector<int> v1, v2;
			v1 = query(1, 1, n, l1, r1);
			v2 = query2(1, 1, m, l2, r2);
			Int len1 = r1-l1+1, len2 = r2-l2+1;
			Int ans = ((len1*(len1+1))/2) * ((len2*(len2+1))/2);
			//check(ans);
			for(int i = 0; i < 26; i++){
				//check(i);
				//check(v1[i]); check(v2[i]);
				ans = ans - (v1[i]*v2[i]);
			}
			cout << ans << endl;
		}
	}

}


int main(){
	Faster;
	int tc = 1; 
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
	return 0;
}
