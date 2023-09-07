#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
using namespace std;

int main()
{
     int i,n;
    while(scanf("%d",&n)==1){
            if(n==0){
                return 0;
            }
     int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

       sort(arr,arr+n);

         for(i=0; i<n; i++){
        cout<<arr[i];
         if((n-1)==i){

         }else{
           cout<<" ";
         }
         }
         cout<<endl;
    }
    return 0;
}

