#include <bits/stdc++.h>
#define int int64_t
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)1e5+5;
class person{
public:
	string name;
	int d, m, y;
	bool operator < (const person &a) const{
		if(this->y > a.y) return true;
		if(y == a.y){
			if(m > a.m) return true;
			if(m == a.m){
				if(d > a.d) return true;
			}
		}
	return false;
	}
};
/*bool cmp(person a, person b){
	if(a.y > b.y) return true;
	if(a.y == b.y){
		if(a.m > b.m) return true;
		if(a.m == b.m){
			if(a.d > b.d) return true;
		}
	}
	return false;
}*/
void solution(int tc){
	int n; cin >> n;
	vector<person> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i].name >> v[i].d >> v[i].m >> v[i].y;
	}
	sort(v.begin(), v.end());
	/*for(auto it: v){
		cout<<it.name<<" "<<it.d<<" "<<it.m<<" "<<it.y<<endl;
	}*/
	cout << v[0].name << endl;
	cout << v[n-1].name << endl;
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