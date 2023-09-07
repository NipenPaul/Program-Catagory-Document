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
    long long int money,sum=0,T,i;
    string input;
    cin>>T;
    for(i=1;i<=T;i++){
        cin>>input;
        if(input=="donate"){
            cin>>money;
            sum=sum+money;
        }else{
         cout<<sum<<endl;
        }
    }
    return 0;
}
