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
const int N = (int) 1e5+5;

const int lim = 31625;
bool prime[lim];
vector<int>all_prime;

void sieve()
{
    prime[1] = true;
    for(int i = 2; i * i < lim; i++)
    {
        if(!prime[i])
        {
            for(int j = i * 2; j < lim; j += i)
            {
                prime[j] = true;
            }
        }
    }
}

map<int, int> ma;
void solution(int tc){
	ma.clear();
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	for(int i = 0; i < n; i++){
		int x = v[i];
		set<int> se;
		for(int j = 0; j < all_prime.size(); j++){

			while(x % all_prime[j] == 0 && x > 1){
				x /= all_prime[j];
				se.insert(all_prime[j]);
			}
		}
		if(x > 1) se.insert(x);

		for(int val: se){
			if(ma[val] == 1){
				cout << "YES" << endl;
				return;
			}else{
				ma[val] = 1;
			}
		}
	}
	cout << "NO" << endl;
}


int main(){
	Faster;
	sieve();
    for(int i = 1; i <= lim; i++)
    {
        if(!prime[i])all_prime.emplace_back(i);
    }
	int tc = 1; 
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
	return 0;
}
