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
    int n,i,r,length,width,widDiv,lenLeft,lenRight;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cin>>r;
        length=(100*r)/20;
        width=(60*r)/20;
        widDiv=width/2;
        lenLeft=(45*length)/100;
        lenRight=length-lenLeft;
        cout<<"Case "<<i<<":"<<endl;
        cout<<"-"<<lenLeft<<" "<<widDiv<<endl;
        cout<<""<<lenRight<<" "<<widDiv<<endl;
        cout<<""<<lenRight<<" -"<<widDiv<<endl;
        cout<<"-"<<lenLeft<<" -"<<widDiv<<endl;
    }
    return 0;
}
