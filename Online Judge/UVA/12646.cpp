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
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3){

        if(a==b&&b==c){
            printf("*\n");
        }else if(a==b){
          printf("C\n");
        }else if(b==c){
        printf("A\n");
        }else{
            printf("B\n");
        }
    }
    return 0;
}
