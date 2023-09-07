#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long

using namespace std;

 int main()
 {
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       string ch;
       cin >> ch;
       bool ck = false;
       int ct = 0;
       int fi = -1, las;
       for(int i = 0; i < ch.size(); i++)
	   {
           if(ch[i] == '1')
           {
             fi = i;
             break;
           }
       }

	  for(int i = ch.size() - 1; i >= 0; i--)
	   {
           if(ch[i] == '1')
           {
             las = i;
             break;
           }
       }

       if(fi != -1)
       {
           for(int i = fi; i <= las; i++)
           {
              if(ch[i] == '0')
                 ct++;
           }
       }
       cout << ct ;
       printf("\n");
    }
    return 0;
 }
