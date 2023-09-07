#include <bits/stdc++.h>
#define int long long
using namespace std;
void test_case_check()
{
    //ios::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
       freopen("in.txt", "r", stdin);
    //   freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
const int lim = 1e6 + 1;
vector<int> prime;
bool visited[lim];
void sieve()
{
    visited[1] = true;
    prime.push_back(2);
    for(int i = 4; i <= lim; i += 2)
        visited[i] = true;
    for(int i = 3; i <= lim; i += 2)
    {
        if(!visited[i])
        {
            prime.push_back(i);
            for(int j = i * i; j <= lim; j += i * 2)
                visited[j] = true;
        }
    }
}

int32_t main()
{
    test_case_check();
    sieve();
    int n;
    while(cin >> n)
    {
        int num = n;
        if(n == 0) return 0;
        cout << num << " = ";
        if(n == 1) cout << "1" << endl;
        else if(n == -1) cout << "-1" << endl;
        else{
            vector<int> ans;
            if(n < 0) n *= (-1), ans.push_back(-1);

                int siz = prime.size(), i = 0;
                while(n > 1 && siz > i)
                {
                   if(n % prime[i] == 0)
                   {
                      n /= prime[i];
                      ans.push_back(prime[i]);
                   }
                   else
                   {
                    i++;
                   }
                }
                if(n != 1)ans.push_back(n);
                siz = ans.size();
                for(int i = 0; i < siz; i++)
                {
                   if(i+1 == siz)cout << ans[i];
                   else cout << ans[i] << " x ";
                }
                cout << endl;
            }
    }

    return 0;
}
