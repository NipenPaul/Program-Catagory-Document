#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

const int lim = 1e5 + 1;

int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- )
		{
			string a, b, c;
			cin >> a >> b >> c;
			bool ck = true;

			for ( int i = 0; i < a.size(); i++ )
				{
					if ( a[i] == c[i] || b[i] == c[i] )
						{
						}
					else
						{
							ck = false;
							break;
						}
				}

			if ( ck ) { printf ( "YES\n" ); }

			else { printf ( "NO\n" ); }
		}

	return 0;
}
