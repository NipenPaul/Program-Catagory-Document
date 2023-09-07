#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

int main(int argc, char const *argv[]){
	Faster;
	int n;
	while(cin >> n){
		if(n == 0){
			return 0;
		}
		while(true){
			bool ok = false;
			stack<int> st1;
			vector<int> vec(n);
			for(int i = 0; i < n; i++){
				cin >> vec[i];
				if(vec[i] == 0){
					ok = true;
					break;
				}
			}
			if(ok){
				cout << endl;
				break;
			}
			for(int i = n-1; i >= 0; i--){
				st1.push(vec[i]);
			}
			int i = 1;
			stack<int> st2;
			while(!st1.empty()){
				int value = st1.top();
				if(i == value){
					st1.pop();
					//cout << i << " ";
					i++;
				}
				else if(!st2.empty() && value == st2.top()){
					st1.pop();
					//cout << st2.top() << " ";
					st2.pop();
				}
				else{
					st2.push(i);
					i++;
				}
				if(i == n+2)break;
			}
			if(st1.empty()) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}
    return 0;
}