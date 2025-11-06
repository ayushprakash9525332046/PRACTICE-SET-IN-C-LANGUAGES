#include<stdio.h>
int main(){
    int rev=0,r,n,i;
    printf("enter a number:");
    scanf("%d",&n);
    (n>0);
    for (i=1;i<=n;i++){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
    
}