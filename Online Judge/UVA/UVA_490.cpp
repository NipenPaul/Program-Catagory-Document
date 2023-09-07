#include<bits/stdc++.h>

using namespace std;

void start()
{
      ios_base::sync_with_stdio(false);
      cin.tie(nullptr);
      cout.tie(nullptr);
  #ifndef ONLINE_JUDGE
		freopen("input.txt", "rt", stdin);
	//	freopen("output.txt", "wt", stdout);
  #endif // ONLINE_JUDGE
}

const int lim = 1e2 + 10;

string ch[lim];

int main()
{
  start();

  int n = 0, mx = 0;

   while (getline(cin, ch[n]))
    {
        if (ch[n].size() > mx)
            mx = ch[n].size();
        ++n;
    }

    for(int j = 0; j < mx; j++)
    {
		for(int i = n - 1; i >= 0; i--)
        {
			 if(j < ch[i].size())
			 cout << ch[i][j];
			 else
			 cout << " ";
		}
	    cout << '\n';
	}
  return 0;
}
