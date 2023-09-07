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

map<int, bool> ma;

int main()
{
  start();
  int n;
  while(cin >> n)
  {
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
    {
       cin >> vec[i];
    }

    bool ck = true;
    for(int i = 0; i < n - 1; i++)
    {
      int dif = abs(vec[i] - vec[i+1]);
      ma[dif] = true;
    }

    for(int i = 1; i < n; i++)
    {
       if(!ma[i])
       {
         ck = false;break;
       }
    }

    if(ck) cout << "Jolly\n";
    else cout << "Not jolly\n";

    ma.clear();
  }
  return 0;
}

