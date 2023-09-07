#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+2;
int tree[N*4], ar[N], n, q;

void tree_bulild(int node, int l, int r){
	if(l == r){
		tree[node] = ar[l];
		return;
	}
	int left_node = node*2;
	int right_node = node*2+1;
	int mid = (l+r) / 2;
	tree_bulild(left_node, l, mid);
	tree_bulild(right_node, mid+1, r);
	tree[node] = min(tree[left_node], tree[right_node]);
}

int query_min(int node, int l, int r, int i, int j){
	if(j < l ||  i > r){
		return INT_MAX;
	}
	if(i <= l && j >= r){
		return tree[node];
	}
	int left_node = node*2;
	int right_node = node*2+1;
	int mid = (l+r) / 2;
	int p1 = query_min(left_node, l, mid, i, j);
	int p2 = query_min(right_node, mid+1, r, i, j);
	return min(p1, p2);
}
void solution(int tc){
	cout << "Case " << tc << ":\n";
	memset(tree, 0, n*4);
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> ar[i];
	}
	tree_bulild(1,1, n);
	while(q--){
		int l, r; cin >> l >> r;
		cout << query_min(1, 1, n, l, r) << endl;
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