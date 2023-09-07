#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	int q; cin >> q;
	deque<int> de;
	int r = 0;
	while(q--){
		string ch; cin >> ch;
		if(ch == "toFront"){
			int x; cin >> x;
			if(!(r & 1))
			  de.push_front(x);
			else
			   de.push_back(x);
		}else if(ch == "push_back"){
			int x; cin >> x;
			if(!(r&1))
			  de.push_back(x);
			else 
			  de.push_front(x);
		}else if(ch == "reverse"){
			if(!de.empty())
				r++;
		}else{
			if(de.empty()){
				cout << "No job for Ada?" << endl;
			}else if(ch == "front"){
				if(r&1){
					cout << de.back() << endl;
					de.pop_back();
				}else{
					cout << de.front() << endl;
					de.pop_front();
				}
			}else{
				if(r&1){
					cout << de.front() << endl;
					de.pop_front();
				}
				else{
					cout << de.back() << endl;
					de.pop_back();
				}

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