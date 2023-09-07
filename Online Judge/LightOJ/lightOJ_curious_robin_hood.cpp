#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+2;

ll tree[N*4], ar[N];
int n, q;

void tree_build(int node, int b, int e){
	if(b == e){
		tree[node] = ar[b];
		return;
	}
	int left_node = node << 1;
	int right_node = (node << 1) + 1;
	int mid = (b+e) / 2;
	tree_build(left_node, b, mid);
	tree_build(right_node, mid+1, e);
	tree[node] = tree[left_node] + tree[right_node];
}

ll query_sum(int node, int b, int e, int i, int j){
	if(b > j || i > e){
		return 0;
	}
	if(i <= b && j >= e){
		return tree[node];
	}
	int left_node = node << 1;
	int right_node = (node << 1) + 1;
	int mid = (b+e) / 2;
	ll p1 = query_sum(left_node, b, mid, i, j);
	ll p2 = query_sum(right_node, mid+1, e, i, j);
	return p1 + p2;
}

void update(int node, int b, int e, int ind, ll value){
	if(ind > e || ind < b) return;
	if(b == e && ind == b){
		ar[ind] = value;
		tree[node] = ar[ind];
		return;
	}
	int left_node = node << 1;
	int right_node = (node << 1) + 1;
	int mid = (b+e)/2;
	update(left_node, b, mid,ind, value);
	update(right_node, mid+1, e,ind, value);
	tree[node] = tree[left_node] + tree[right_node];	
}
void solution(int tc){
	cout << "Case " << tc << ":\n";
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> ar[i];
	}
	memset(tree, 0, n*4);
	tree_build(1, 1, n);
	while(q--){
		int t; cin >> t;
		if(t == 1){
			int ind; cin >> ind;
			cout << ar[ind+1] << endl;
			update(1, 1, n, ind+1, 0);
		}else if(t == 2){
			int ind; ll value; cin >> ind >> value;
			value += ar[ind+1];
			update(1, 1, n, ind+1, value);
		}else{
			int i, j; cin >> i >> j;
			i++; j++;
			cout << query_sum(1, 1, n, i, j) << endl;
		}
	}
}
int main(int argc, char const *argv[]){
	Faster;
	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
} 