#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

int lower_binary(vector<pair<int, int>> & A, int val, int low, int high, int loc){
	int ind = -1;
	while(low <= high){
		int mid = (low + high) / 2;
		if(A[mid].first == val && A[mid].second > loc){
			ind = A[mid].second;
			high = mid - 1;
		}else if(A[mid].first > val){
			high = mid-1;
		}else{
			low = mid+1;
		}
	}
	return ind;
}

void solution(int tc){
	int n, q; cin >> n >> q;
	vector<pair<int, int>> A(n);
	for(int i = 0; i < n; i++){
		cin >> A[i].first;
		A[i].second = i;
	}
	sort(A.begin(), A.begin()+n);
	/*for(int i = 0; i < n; i++){
		cout << A[i].first << " ";
		cout << A[i].second << " " << endl;
	}*/
	while(q--){
		int m; cin >> m;
		vector<int> B(m);
		for(int i = 0; i < m; i++){
			cin >> B[i];
		}
		bool ok = true;
		int ind = -1;
		for(int i = 0; i < m; i++){
			int ck = lower_binary(A, B[i], 0, n-1, ind);
			//cout << ck << endl;
			if(ck == -1){
				ok = false;
				break;
			}
			ind = ck;
		}
		if(ok) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
int32_t main(){
	Faster;
	int tc = 1;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}
