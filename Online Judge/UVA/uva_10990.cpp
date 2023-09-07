#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int lim = (int) 2e6 + 3;

ll phi[lim];
bool mark[lim];
ll dp[lim];
ll cum[lim];

void sievephi(int n)
{
    int i, j;
    // initialization
    for(i = 1; i <= n; i++) phi[i] = i;

    mark[1] = 1;
    phi[1] = 1;

    for(i = 2; i <= n; i++)
    {
        if(!mark[i])  // if i is prime
        {
            for(j = i; j <= n; j += i)
            {
                mark[j] = 1;
                // phi[j] will be divisible by i
                // so no need to worry
                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }
    dp[2] = 1;
    cum[2] = 1;
    cum[1] = 0;
    for(int i = 3; i <= 2000000; i++)
    {
        dp[i] = dp[phi[i]] + 1;
        cum[i] = cum[i-1] + dp[i];
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);cin.tie(0);
    #ifndef ONLINE_JUDGE
      freopen("in.txt", "r", stdin);
    //  freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sievephi(2000002);
    int tt; cin >> tt;
    while(tt--)
    {
        int n, m; cin >> n >> m;
        cout << cum[m] - cum[n-1] << endl;
    }
    return 0;
}
