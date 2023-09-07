#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

const int lim = 1e5 + 1;
const int mod = 1e9 + 7;


int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- )
		{
		    vector<int> vec(4);
		    int a, b, x, y;
		    cin >> a >> b >> x >> y;
            int tem;
            tem = abs(0 - x) * b;
            vec[0] = tem;
			tem = (abs(a - x) - 1) * b;
            vec[1] = tem;

            tem = abs(0 - y) * a;
            vec[2] = tem;
			tem = (abs(b - y) - 1) * a;
            vec[3] = tem;

            sort(vec.begin(), vec.end());

            cout << vec[3] << '\n';

		}

	return 0;
}


