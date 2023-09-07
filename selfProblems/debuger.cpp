#include <bits/stdc++.h>
#define int int64_t
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

#ifdef VAMP
     #define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template < typename Arg1 >
    void __f(const char* name, Arg1&& arg1){
        cout << name << " = " << arg1 << std::endl;
    }
    template < typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names+1, ',');
        cout.write(names, comma - names) << " = " << arg1 <<" | ";
        __f(comma+1, args...);
    }
#else
    #define debug(...)
#endif

const int N = (int)1e5+5;

void solution(int tc){
	int n; cin >> n;
	std::vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		debug(i, v[i]);
	}
}
int32_t main(){
	#ifdef VAMP
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	Faster;
	int tc = 1;
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}

	#ifdef VAMP
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif
    return 0;
}
