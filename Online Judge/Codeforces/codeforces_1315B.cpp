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
		  ll a, b, p, i, ans = 0;
		  string ch;
		  cin >> a >> b >> p >> ch;
		  bool ck = true;
		  int len = ch.size();
		  for(i = len - 2; i >= 0; i--)
		  {
            if(ch[i] == 'A') ans += a;
            else ans += b;
            int j = i;
            while(ch[j] == ch[i] && j >= 0)
            {
               j--;
            }
            if(ans > p)
            {
               cout << i + 2 << '\n';
               ck = false;
               break;
            }
            i = j + 1;
		  }
		  if(ck)puts("1\n");

		}

	return 0;
}



