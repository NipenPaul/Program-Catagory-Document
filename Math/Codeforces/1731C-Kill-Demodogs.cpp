/**----------Solution Start---------*/
#define PI acos(-1.0)
#define ll long long int
const int Mod = (int) 1e9+7;
const int N = (int) 1e5+5;
 
ll BigMod(ll base, ll pw, ll Mod){
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
 
 
void solution(int tc){
	ll n; cin >> n;
 
	ll a = (n*(n+1)) % Mod * (2*n+1) % Mod;
	a = a * 2022 % Mod;
	a = a * BigMod(6, Mod-2, Mod) % Mod;
 
	ll b = ((n-1)*n) % Mod * (n+1) % Mod;
	b = b * 2022 % Mod;
	b = b * BigMod(3, Mod-2, Mod);
 
	ll ans = (a+b) % Mod;
	cout << ans << endl;
}
