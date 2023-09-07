#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)2e5+2;
const ll MOD = (ll)1e3;

ll lastDigits(ll base, ll pw, ll Mod){
	// Last 3 digit just MOD = 1000
	ll ans = 1;
	while(pw > 0){
		if(pw & 1){
			ans = (ans * base) % Mod;
		}
		pw >>=1L;
		base = (base*base) % Mod;
	}
	return ans;
}
ll firstDigits(ll n, ll k){
	long double power;
	power = (double)k * log10(n);
	//cout << power - floor(power) << endl;
	ll ans = pow(10, power - floor(power)) * 100.0;
	return ans;
}
void solution(int tc){
	ll n, k; cin >> n >> k;
	cout << firstDigits(n, k) << "...";
	ll pw = lastDigits(n, k, MOD);
	cout << setw(3) << setfill('0') << pw << endl;
}
int main(int argc, char const *argv[]){
	Faster;
	int tc = 1; 
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}
