#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int lim = 300;

int main()
{
   //freopen("in.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
  int t;
  cin >> t;
  while(t--)
  {
	int charn;
	ll ar[lim] ={0};
	ll ct[lim] = {0};
	cin >> charn;
	while(charn--)
	{
       string c;
       ll value;
       cin >> c >> value;
       ar[(int)c[0]] = value;
   }

	int m;
	cin >> m;
	string ch[m];
	getchar();
	for(int i = 0; i < m; i++)
	{
        getline(cin , ch[i]);
	}

	for(int i = 0; i < m; i++)
	{
        int len = ch[i].size();
        for(int j = 0; j < len; j++)
        {
           ct[(int)ch[i][j]]++;
        }
        //cout << ct['a'] << " \n";
	}

    ll sum = 0;
    for(int i = 0; i < lim; i++)
    {
        sum = sum + (ar[i] * ct[i]);

        //if(ar[i])cout << (char) i << " = " << ar[i] << '\n' << ct[i] << '\n';
    }
    long double ans = (long double)sum * 0.01;
    cout << setprecision(2) << fixed << ans  << "$"<< '\n';
    //printf("%.2llf$\n", ans);
  }
  return 0;
}

