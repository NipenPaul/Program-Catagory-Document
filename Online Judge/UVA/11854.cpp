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
int main(){
    int d,a,b,c,x,y,z,sum;
    while(scanf("%d%d%d",&a,&b,&c)==3){
    if(a>0&&b>0&&c>0)
    {
    if(a>b&&a>c){
            x=a*a;
            y=b*b;
            z=c*c;
            sum=y+z;
            if(x==sum){
            cout<<"right"<<endl;
            }else{
            cout<<"wrong"<<endl;
            }
    }else if(b>a&&b>c){
            x=b*b;
            y=a*a;
            z=c*c;
            sum=y+z;
         if(x==sum){
            cout<<"right"<<endl;
            }else{
            cout<<"wrong"<<endl;
            }
    }else{
            x=c*c;
            y=b*b;
            z=a*a;
            sum=y+z;
         if(x==sum){
            cout<<"right"<<endl;
            }else{
            cout<<"wrong"<<endl;
            }
    }
    }else{
      return 0;
    }
    }
 return 0;
}
