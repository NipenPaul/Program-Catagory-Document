#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long

using namespace std;

 int main()
 {
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       ll arr[3];
       cin >> arr[0] >> arr[1] >> arr[2];
       sort(arr, arr + 3);
       if((arr[0] + arr[1]) >= (arr[2] - 1)) cout << "Yes";
       else cout << "No";

       printf("\n");
    }
    return 0;
 }
