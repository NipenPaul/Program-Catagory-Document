/// lamda function..
sort(v.begin(), v.end(),[](pair<int, int>a, pair<int, int> b){
		if(a.first < b.first) return true;
		if(a.first == b.first){
			if(a.second > b.second) return true;
		}
		return false;
});

class person{
public:
	string name;
	int d, m, y;
	/// operator function
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

// Normal function
bool cmp(person a, person b){
	if(a.y > b.y) return true;
	if(a.y == b.y){
		if(a.m > b.m) return true;
		if(a.m == b.m){
			if(a.d > b.d) return true;
		}
	}
	return false;
}