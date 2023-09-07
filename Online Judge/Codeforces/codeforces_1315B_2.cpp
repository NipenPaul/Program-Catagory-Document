#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

const int lim = 1e5 + 1;
const int mod = 1e9 + 7;

ll a, b, p, len;
string ch;

bool  Cal ( int ind )
{
	ll ans = 0;
	char ck = '#';

	for ( int i = ind; i < len - 1; i++ ) {
		if ( ck == ch[i] ) { continue; }

		else {
			if ( ch[i] == 'A' ) { ans += a; }

			else { ans += b; }

			ck = ch[i];
		}
	}

	return ( ans <= p );
}

int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- ) {
		cin >> a >> b >> p >> ch;
		len = ch.size();

		ll low = 0, high = len - 1, mid, best;

		while(low <= high)
		{
		    mid = (low + high) / 2;
		    if(Cal(mid))
		    {
		       best = mid;
		       high = mid - 1;
		    }
		    else low = mid + 1;
		}

		cout << best + 1 << '\n';
	}

	return 0;
}
