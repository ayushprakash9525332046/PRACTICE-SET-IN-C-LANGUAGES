#include<stdio.h>
int main(){
    int devisor,dividend,quotient,remainder;
    printf("enter dividend:");
    scanf("%d",&dividend);
    printf("enter devisor:");
    scanf("%d",&devisor);
    quotient=dividend/devisor;
    remainder=dividend%devisor;
    printf( "quetient is %d\n",quotient);
    printf("remainder is %d\n",remainder);
    return 0;
}