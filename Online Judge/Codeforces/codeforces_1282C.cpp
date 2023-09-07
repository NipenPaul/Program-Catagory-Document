#include<bits/stdc++.h>
#define ll long long
#define mx 10005
#define mod 10000007

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int arr[n+1];
    map<int, int> ma, index;
    vector<int> value, change, extra;

    for(int i = 1; i <= n; i++)
    {
       scanf("%d", &arr[i]);
       ma[arr[i]] = 1;
       if(arr[i] == 0){
       index[i] = -1;
        extra.push_back(i);
       }
    }
    for(int i = 1; i <= n; i++)
    {
       if(ma[i] == 0)
       {
          value.push_back(i);
       }
    }

    int k = 0;

	for(int i = 1; i <= n; i++)
    {
       if(arr[i] == 0)
       {
          arr[i] = value[k++];
       }
    }

	for(int i = 1; i <= n; i++)
    {
       if(arr[i] == i && index[i] == -1)
       {
          change.push_back(i);
       }
    }

    int change_size = change.size();

    if(change_size == 1){
      for(int i = 0; i < extra.size(); i++){
         if(change[0] != extra[i]){
		 swap(arr[change[0]], arr[extra[i]]);
		 break;
		 }
		}
    }else{

		for(int i = 0; i < change_size - 1; i++)
		{
		   swap(arr[change[i]], arr[change[i + 1]]);
		}
    }


	for(int i = 1; i <= n; i++)
    {
       printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
