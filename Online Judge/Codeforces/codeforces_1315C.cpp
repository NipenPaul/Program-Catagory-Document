#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long
#define ull unsigned long long

using namespace std;

const int lim = 1e2 + 5;
const int mod = 1e9 + 7;

map<int, int> ma;


int main()
{
	//fread;
	//fwrite;
	int t; scanf ( "%d", &t );

	while ( t-- )
		{
		   ma.clear();
		    int n;
		    cin >> n;
            vector<int> vec(2*n);
            for(int i = 0; i < 2 * n; i += 2)
            {
                 int tem;
                 cin >> tem;
                 vec[i] = tem;
                 ma[tem] = 1;
            }
            bool ck2 = true;
            for(int i = 1; i < 2*n; i += 2)
            {
               bool ck = false;
               int num = vec[i - 1];
               for(int j = num +1 ; j <= 2*n; j++)
               {
                   if(ma[j] == 0)
                   {
                     vec[i] = j;
                     ma[j] = 1;
                     ck = true;
                     break;
                   }
               }
               if(!ck)
               {
                   ck2 = false;
                  cout << "-1\n";
                  break;
               }
            }
            if(ck2){
            for(int i = 0; i < 2*n; i++)
            {
               cout << vec[i] << " ";
            }
            cout << '\n';
            }


		}

	return 0;
}
