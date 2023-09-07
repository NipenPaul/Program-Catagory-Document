#include<bits/stdc++.h>
#define ll long long
#define mx 10005
#define mod 10000007

using namespace std;

struct choc{
  string name;
  int vol;
};


int main() {

   int t, test = 0;
   scanf("%d",&t);
   while(t--)
   {
	int n, i; scanf("%d",&n);
	set<int> se;
	set<int>::iterator it;
	choc cf[n];
	for(i = 0; i < n; i++)
	{
	   int a, b, c;
	    cin >> cf[i].name;
	    cin >> a >> b >> c;
	    cf[i].vol = a * b * c;
	    se.insert(cf[i].vol);
	}

	 printf("Case %d: ", ++test);
	 if(se.size() == 1) cout << "no thief\n";
	 else
	 {
	    if(se.size() == 3){
	    it = se.begin();
	    int tem = *it;
	    ++it;++it;
	    int chor, man;
		for(int i = 0; i < n; i++)
		{
           if(tem == cf[i].vol) man = i;
           if(*it == cf[i].vol) chor = i;
		}
		cout << cf[chor].name << " "<< "took chocolate from";
		cout <<" " << cf[man].name << "\n";
		}
		else
		{
          if(cf[0].vol > cf[1].vol)
          {
cout << cf[0].name << " "<< "took chocolate from";
		cout <<" " << cf[1].name << "\n";
          }
          else
          {
cout << cf[1].name << " "<< "took chocolate from";
		cout <<" " << cf[0].name << "\n";
          }
		}
	 }
   }
    return 0;
}
