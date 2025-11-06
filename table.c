#include<stdio.h>
int main(){
    int n,t;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        t=n*i;
        printf("\n%d",t);
    }
    return 0;
}