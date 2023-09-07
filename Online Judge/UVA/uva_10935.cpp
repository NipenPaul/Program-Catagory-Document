#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	int n;
	while(cin >> n){
		if(n == 0) return;
		deque<int> de;
		for(int i = 0; i < n; i++){
			de.push_back(i+1);
		}
		if(n == 1){
			cout << "Discarded cards:" << endl;
		}else{
		cout << "Discarded cards: ";
		}
		while(de.size() > 1){
			if(de.size() == 2){
				cout << de.front() << endl;
			}else{
				cout << de.front() << ", ";
			}
			de.pop_front();
			de.push_back(de.front());
			de.pop_front();
		}
		cout << "Remaining card: " << de[0] << endl;
	}
}
int32_t main(){
	Faster;
	int tc = 1; 
	//cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}