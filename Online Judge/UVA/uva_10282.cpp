#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;

void solution(int tc){
	map<string, string> ma;
	string value;
	while(getline(cin, value)){
		if(value == "")break;
		bool ok = false;
		string s1 = "", s2 = "";
		for(int i = 0; i < value.size(); i++){
			if(value[i] == ' '){
				ok = true;
				continue;
			}
			if(!ok){
				s1 += value[i];
			}else{
				s2 += value[i];
			}
		}
		ma[s2] = s1;
	}

	while(cin >> value){
		if(ma.find(value) != ma.end()){
			cout << ma[value] << endl;
		}else{
			cout << "eh" << endl;
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