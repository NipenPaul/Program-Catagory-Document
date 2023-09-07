/**
   Hare Krishna Hare Krishna, Krishna Krishna Hare Hare
   Hare Rama Hare Rama, Rama Rama Hare Hare (Reapeat)
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

int phi(int n)
{
   if(n==1)
        return 0;
    int ret = n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            ret -= (ret / i);
        }
    }
    if(n > 1)
    {
        ret -= (ret / n);
    }
    return ret;
}

int32_t main()
{
    ios_base :: sync_with_stdio(false);cin.tie(0);
    #ifndef ONLINE_JUDGE
      freopen("in.txt", "r", stdin);
    //  freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int n;
    while(cin >> n)
    {
        if(n == 0)return 0;
        cout << phi(n) << endl;
    }
    return 0;
}


