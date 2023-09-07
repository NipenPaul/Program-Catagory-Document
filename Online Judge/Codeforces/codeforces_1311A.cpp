#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- ) {

        ll a, b, ans = 0;
        cin >> a >> b;

        if(a == b)
        {
          ans = 0;
        }
        else if(b < a && (a - b) % 2 == 0)
        {
           ans = 1;
        }
        else if(b < a && (a - b) % 2 != 0)
        {
           ans = 2;
        }
		else if(b > a && (a - b) % 2 == 0)
        {
           ans = 2;
        }
        else if(b > a && (a - b) % 2 != 0)
        {
           ans = 1;
        }
        cout << ans << '\n';

	}

	return 0;
}
