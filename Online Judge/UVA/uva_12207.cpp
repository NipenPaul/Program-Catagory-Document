#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	int n, c;
	tc = 1;
	while(cin >> n >> c){
		if(n == 0 && c == 0) return;
		deque<int> de;
		int mx = min(n, (int)1000);
		for(int i = 1; i <= mx; i++){
			de.push_back(i);
		}
		map<int, int> ma;
		cout << "Case " << tc << ":\n";
		tc++;
		while(c--){
			char ch; cin >> ch;
			if(ch == 'N'){
				cout << de.front() << endl;
				de.push_back(de.front());
				de.pop_front();
			}else{
				int x; cin >> x;
				deque<int> tem;
				while(!de.empty() && x != de.front()){
					tem.push_back(de.front());
					de.pop_front();
				}
				if(!de.empty()){
					if(x == de.front()){
						de.pop_front();
					}
				}
				while(!tem.empty()){
					de.push_front(tem.back());
					tem.pop_back();
				}
				de.push_front(x);
			}
		}
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