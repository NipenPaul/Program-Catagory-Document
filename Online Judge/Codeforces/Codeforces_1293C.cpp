#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define lim 100005
#define Mod 1e9 + 7
#define ll long long
#define ull unsigned long long

using namespace std;

bool Block[3][lim];

int main()
 {
      ios::sync_with_stdio(false);
	  cin.tie(0);
    // fread;
    //fwrite;
    int n, q, ct = 0;
    cin >> n >> q;
    while(q--)
    {
        int r, c;
        cin >> r >> c;

        if(Block[r][c] == false)
        {
           Block[r][c] = true;
           if(r == 1)
           {
            if(Block[2][c])
            {
              ct++;
            }
             if(Block[2][c+1])
            {
              ct++;
            }
             if(Block[2][c-1])
            {
              ct++;
            }
           }
           else if(r == 2)
           {
             if(Block[1][c])
			 {
			    ct++;
			 }
			 if(Block[1][c+1])
			 {
			    ct++;
			 }
			 if(Block[1][c-1])
			 {
			    ct++;
			 }
           }
        }
        else
        {
           Block[r][c] = false;
           if(r == 1)
           {
             if(Block[2][c])
              ct--;
               if(Block[2][c-1])
              ct--;
               if(Block[2][c+1])
              ct--;
           }
           else if(r == 2)
           {
              if(Block[1][c])
              ct--;
               if(Block[1][c-1])
              ct--;
               if(Block[1][c+1])
              ct--;
           }
        }


//		for(int i= 1; i <= 2; i++)
//        {
//          for(int j = 1; j <= n; j++)
//          {
//            cout << Block[i][j] << " ";
//          }
//          cout << '\n';
//        }
//
//        cout << ct << endl;

        if(ct == 0)
        {
          cout << "Yes" << '\n';
        }
        else
        {
          cout << "No" << '\n';
        }
    }
    return 0;
 }


