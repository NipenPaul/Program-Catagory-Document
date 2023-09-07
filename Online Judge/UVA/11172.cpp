#include<iostream>
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
    long long int a,b,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
       cin>>a>>b;
       if(a>b){
        cout<<">"<<endl;
       }else if(a<b){
       cout<<"<"<<endl;
       }else{
           cout<<"="<<endl;
       }
    }

    return 0;
}
