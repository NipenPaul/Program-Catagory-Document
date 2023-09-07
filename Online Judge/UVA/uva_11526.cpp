#include <bits/stdc++.h>
#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	//fread;fwrite;
    int t; scanf("%d", &t);
	while(t--)
	{
		ll n, res = 0;
		cin >> n;
		if(n > 0)
		{ 
			for (ll i = 1; i * i <= n; i++)
			{
				res += (n / i);
			}
			ll sr = sqrt(n + .0001);
			res *= 2;
			res -= (sr * sr);
	    }
		cout << res << endl;
	}
	return 0;
}
