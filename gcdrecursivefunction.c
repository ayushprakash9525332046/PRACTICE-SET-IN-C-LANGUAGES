#include<stdio.h>
int main()

{
    int a,b,gcd;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if (a>b){
        for (int i=1;i<=b;i++){
        if (a%i==0&&b%i==0)
        gcd =i;
        }
        }
    if (b>a){
        for(int i=1;i<=a;i++){
            if (a%i==0 && b%i==0)
            gcd =1;
        }
    }
    printf("\n\ngcd of %dand %d is %d",a,b,gcd);
}
   