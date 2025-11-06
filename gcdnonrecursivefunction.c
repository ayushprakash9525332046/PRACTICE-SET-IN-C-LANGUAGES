#include<stdio.h>
int main()
{
    int num1,num2,temp,gcd;
    printf("please enter two integer value \n");
    scanf("%d%d",&num1,&num2);
    while (num2!=0){
        temp =num2;
        num2=num1%num2;
        num1=temp;
    }
    gcd=num1;
    printf("gcd=%d",gcd);
    return 0;
}