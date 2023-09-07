#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	string ch;
	vector<string> v;
	map<string, bool> ma;
	while(cin >> ch){
		string s = "";
		for(char c: ch){
			if(c >= 'a' && c <= 'z'){
				s += c;
			}else if(c >= 'A' && c <= 'Z'){
				c += 32;
				s += c;
			}else{
					if(ma.find(s) == ma.end() && s != "")
					{
						v.push_back(s);
						ma[s] = true;
						s = "";
					}
					s = "";
			}
		}
		if(ma.find(s) == ma.end() && s != "")
		{
			v.push_back(s);
			ma[s] = true;
			s = "";
		}
	}
	sort(v.begin(), v.end());
	for(string s: v){
		cout << s << endl;
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