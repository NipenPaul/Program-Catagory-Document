#include<bits/stdc++.h>
#define ll long long

using namespace std;
const int lim = (int) 2e5 + 5;

ll phi[lim];
bool mark[lim];
ll dp[lim];

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
    dp[0] = 1;
    dp[1] = 2;
    for(int i = 2; i <= n; i++)
    {
        dp[i] = dp[i-1] + phi[i];
        //cout << dp[i] << endl;
    }
}

ll search_num(ll n)
{
    ll low = 1, high = (ll)2e5;
    int ok = 0;
    while(low <= high)
    {
        ll mid = (low + high) / 2;
        if(dp[mid] <= n)
        {
           ok = mid;
           low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ok;
}

int main()
{
    ios_base :: sync_with_stdio(false);cin.tie(0);
    #ifndef ONLINE_JUDGE
      freopen("in.txt", "r", stdin);
    //  freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sievephi(200002);
    ll n;
    while(cin >> n)
    {
        if(n == 0) return 0;
        if(n == 1) cout << "0/1\n";
        else
        {
            ll pos_num = search_num(n);
            ll k;
            if(dp[pos_num] == n)
            {
                k = dp[pos_num-1];
            }
            else
            {
                k = dp[pos_num];
                pos_num++;
            }

            //cout << k << endl;

            for(ll i = 1; i <= pos_num; i++)
            {
                if((__gcd(i,pos_num)) == 1)k++;
                //cout << k << endl;
                if(k == n) {
                    //cout << n << " : ";
                        cout << i << "/" << pos_num << endl;
                    break;
                }
            }
        }
    }
    return 0;
}


