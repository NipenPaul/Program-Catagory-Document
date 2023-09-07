#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,i,n,ct=0;
    double sqr;
    while(scanf("%d%d",&a,&b)==2){
            if(a==0||b==0){
                return 0;
            }else{
            for(i=a;i<=b;i++){
                sqr=sqrt(i);
                n=sqr;
                if(sqr==n){
                    ct++;
                }
            }
            printf("%d\n",ct);
            ct=0;
            }
    }
    return 0;
}
