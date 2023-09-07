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
	int m; cin >> m;
	vector<vector<int>> v(m);
	map<int, int> mp, mp2;
	for(int i = 0; i < m; i++){
		int n; cin >> n;
		for(int j = 0; j < n; j++){
			int x; cin >> x;
			v[i].push_back(x);
			mp[x]++;
		}
	}
	vector<int> ans;
	for(int i = m-1; i >=  0; i--){
		int mx = 0, va = 0;
		for(int &x: v[i]){
			//cout << x << " " << mp[x] << endl;
			if(mp[x] > mx && mp2[x] == 0){
				mx = mp[x];
				va = x;
			}
			mp2[x] = 1;
		}
		if(va != 0){
			ans.push_back(va);
		}
	}
	if(ans.size() == m){
		reverse(ans.begin(), ans.end());
		for(int &x: ans) cout << x << " ";
		cout << endl;
	}else{
		cout << -1 << endl;
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