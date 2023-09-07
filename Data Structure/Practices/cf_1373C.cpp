#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

void start()
{
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    #ifndef ONLINE_JUDGE
       freopen("in.txt", "r", stdin);
    //   freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
const int lim = 1e3+5;
const int INF = 1e9;

int main(int argc, char const *argv[])
{
	start();
    int tc; cin >> tc; while(tc--)
    {
    	ll res = 0;
    	string ch; cin >> ch;
    	vector<int> ans;
    	int cur = 0;
    	res += ch.size();
    	for(int i = 0; i < ch.size(); i++)
        {
            if(ch[i] == '+')cur++;
            else cur--;
            if(cur < 0)
            {
                cur = 0;
                ans.push_back(i+1);
            }
        }
        for(auto x : ans)
        {
            res += x;
        }
        cout << res << endl;

    }
	return 0;
}

