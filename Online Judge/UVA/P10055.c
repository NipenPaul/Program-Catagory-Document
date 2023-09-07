#include<stdio.h>

int main()
{
    long int num1,num2,result,a=-1;

    while(scanf("%ld%ld",&num1,&num2)==2){

            if(num1<num2)
            {
                result=num1-num2;
                result=a*result;
                printf("%ld\n",result);

            }
            else
            {
                 result=num1-num2;
        printf("%ld\n",result);
            }


    }
    return 0;
}
