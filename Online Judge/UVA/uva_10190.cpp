#include <bits/stdc++.h>
#define fread freopen("in.txt", "r", stdin)
#define fwrite freopen("out.txt", "w", stdout)
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	//fread;fwrite;
    ll n, m;
    while(cin >> n >> m)
    {
    	std::vector<ll> v;

    	if(n == 0 || m == 0 || m == 1)
    	{
    		cout << "Boring!" << endl;
    		continue;
    	}

    	while(n % m == 0 && n != m && n > m)
    	{
    		v.push_back(n);
    		n /= m;
    	}
    	if(n == m)
    	{
    		v.push_back(n);
    		for (int i = 0; i < v.size(); ++i)
    		{
    			cout << v[i] << " ";
    		}
    		cout << 1 << endl;
    	}
    	else
    	{
    		cout << "Boring!" << endl;
    	}
    	v.clear();
    }
	return 0;
}
