// solution: https://codeforces.com/contest/1353/problem/D
#include <bits/stdc++.h>

using namespace std;

class Pair
{
public:
	int fi, sec;
};

bool cmp(Pair a, Pair b)
{
	int lena = a.sec - a.fi + 1;
	int lenb = b.sec - b.fi + 1;
	if(lena == lenb) return a.fi < b.fi;
	return lena > lenb;
}

int main(int argc, char const *argv[])
{
	int tc; scanf("%d", &tc);
	while(tc--)
	{
		int n; scanf("%d", &n);
		std::vector<int> v(n+1);
		std::set<Pair, decltype(&cmp)> se(&cmp);
		se.insert({1, n});
		int i = 1;
		while(!se.empty())
		{
			Pair p = *se.begin();
			se.erase(se.begin());
			int mid = (p.fi + p.sec)/2;
			v[mid] = i++;
			if(p.fi < mid)se.insert({p.fi, mid-1});
			if(p.sec > mid)se.insert({mid+1, p.sec});
		}
		for(int i = 1; i <= n; i++)
		{
			printf("%d ", v[i]);
		}
		printf("\n");
	}
    return 0;
}