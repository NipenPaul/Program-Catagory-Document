#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)2e5+2;
map<int, int> ma;
void solution(int tc){
	int a, b;
	while(cin >> a >> b){
		int d = a / b;
		int m = a % b;
		cout << a << "/" << b << " = " << d << ".";
		vector<int> v;
		int ct = 1;
		int len, ind = 0; bool ok = false;
		while(true){
			m = m * 10 + 0;
			d = m / b;
			v.push_back(d);
			if(m % b == 0){
				len = 1;
				ok = true;
				break;
			}
			else if(ma[m] > 0){
				//CHECK(m);
				len = ct - ma[m];
				ind = ma[m];
				break;
			}else{
				ma[m] = ct;
				ct++;
			}
			m = m % b;
		}
		//CHECK(m);
		int sz = v.size();
		if(ok){
			if(v[0] == 0 && sz == 1){
				cout << "(0)\n";
			}else{
				for(int i = 0; i < sz; i++){
					cout << v[i];
				}
				cout << "(0)\n";	
			}
		}
		else{ 
			//CHECK(sz);
			int cnt = 0;
			for(int i = 0; i < ind-1; i++){
				cout << v[i];
				cnt++;
			}
			cout << "(";
			for(int i = ind-1; i < sz-1; i++){
				cout << v[i]; cnt++;
				if(cnt == 50 && sz > 51){
					cout << "...)\n";
					break;
				}else if(sz == 51 && cnt == 50){
					cout << ")\n";
				}
			}
			if(50 > cnt){
				cout << ")\n";
			}

		}
		cout << "   " << len << " = "  << "number of digits in repeating cycle\n";
		cout << endl;
		ma.clear();
	}
}
int main(int argc, char const *argv[]){
	Faster;
	int tc = 1; 
	//cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}