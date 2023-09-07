#include<bits/stdc++.h>
#define fwrite freopen("in.txt","r",stdin)
#define fread freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long

using namespace std;

int main()
{
   int q;
   cin >> q;
   while(q--)
   {
     int arr[3];
     cin >> arr[0];
     cin >> arr[1];
     cin >> arr[2];
     sort(arr, arr+3);

     if(arr[0] == arr[1] && arr[1] == arr[2])
     {

     }
     else if(arr[0] == arr[1] && arr[1] != arr[2])
     {
        arr[0]++;
        arr[1]++;
        if(arr[1] != arr[2]) arr[2]--;
     }
     else if(arr[1] == arr[2] && arr[1] != arr[0])
     {
        arr[2]--;
        arr[1]--;
        if(arr[1] != arr[0]) arr[0]++;
     }
     else
     {
        arr[0]++;
        arr[2]--;
     }
	int ans = 0;
	ans += abs(arr[0] - arr[1]);
	ans += abs(arr[0] - arr[2]);
	ans += abs(arr[1] - arr[2]);

	cout << ans << '\n';
   }
  return 0;
}
