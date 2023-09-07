#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		int ar[n];

		for ( int i = 0; i < n; i++ ) {
			cin >> ar[i];
		}

		int mx = INT_MIN, mn = INT_MAX;

		for ( int i = 0; i < n; i++ ) {
			if ( i > 0 && ar[i] == -1 && ar[i - 1] != -1 ) {
				mn = min ( mn, ar[i - 1] );
				mx = max ( mx, ar[i - 1] );
			}

			if ( i < n - 1 && ar[i] == -1 && ar[i + 1] != -1 ) {
				mn = min ( mn, ar[i + 1] );
				mx = max ( mx, ar[i + 1] );
			}
		}

		int res = ( mn + mx ) / 2;
		mx = INT_MIN;

		for ( int i = 0; i < n; i++ ) {
			if ( ar[i] == -1 ) {
				ar[i] = res;
			}

			if ( i > 0 ) {
				mx = max ( mx, ( abs ( ar[i] - ar[i - 1] ) ) );
			}
		}

		cout << mx << " " << res << '\n';
	}

	return 0;
}
