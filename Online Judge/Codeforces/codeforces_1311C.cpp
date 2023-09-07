#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

const int lim = 1e5 * 2 + 5;

bool visited[lim];
ll qu[lim];

int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- )
		{
		    ll ans[26] = {0};
			int n, m;
			cin  >> n >> m;
			string ch;
			cin >> ch;
			int ar[m];
			for(int i = 0; i < m; i++ )
		    {
			   cin >> ar[i];
		    }
			sort(ar, ar + m);
			ll tem = 0;
             int k = 0;
            for(int i = 0; i < m; i++)
            {
               if(!visited[ar[i]])
               {
                // cout << ar[i] << " " ;
                 visited[ar[i]] = true;
                  tem = (m - i);
               }
               while(k != ar[i]){
                 qu[k] = tem;
                 k++;
               }
            }

            for(int i = 0; i < n; i++)
            {
               //cout << qu[i] << " ";
              ans[ch[i] - 'a'] += (qu[i] + 1);
            }

            for(int i = 0; i < 26; i++)
            {
                   cout << ans[i] << " ";

            }
            cout << '\n';


           ma.clear();
           memset(visited, false, sizeof(visited));
           for(int i = 0; i < lim; i++)
           {
             qu[i] = 0;
           }
		}

	return 0;
}


