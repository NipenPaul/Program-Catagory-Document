#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define Mx 100005
#define ll long long

using namespace std;

 int main()
 {
    int n, l = 0, r = 0; cin >> n;
    string ch;
    cin >> ch;

    for(int i = 0; i < n; i++)
    {
       if(ch[i] == 'L') l++;
       else r++;
    }

    cout << l + r + 1 << '\n';
    return 0;
 }

