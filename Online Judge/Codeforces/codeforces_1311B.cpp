#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

const int lim = 1e5 + 1;
const int mod = 1e9 + 7;

void in ( int arr[], int n )
{
	for ( int i = 0; i < n; i++ )
		{
			scanf ( "%d", &arr[i] );
		}
}

void out ( int arr[], int n )
{
	for ( int i = 0; i < n; i++ )
		{
			printf ( "%d ", arr[i] );
		}
}



int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- )
		{
			int n, m;
			cin >> n >> m;
			int arn[n], arm[m];
            in(arn, n);
            in(arm, m);
            sort(arm, arm + m, greater<int>());

            for(int j = 0; j < n; j++)
            {
				for(int i = 0; i < m; i++)
				{
					int r = arm[i];
					int l = r - 1;
					if(arn[l] > arn[r])
					{
					  swap(arn[l], arn[r]);
					}
				}
            }

			bool ck = true;
            for(int i = 0; i < n - 1; i++)
            {
               if(arn[i] > arn[i + 1])
               {
                 ck = false;
                  cout << "NO\n";break;
               }
            }

            if(ck)cout << "YES\n";

            //out(arn, n);
		}

	return 0;
}


