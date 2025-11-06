#include<stdio.h>
int main (){
    int n,i,f=0;
    printf("enter a number:");
    scanf("%d",&n);
    for (i=2;i<=n-1;i++){
        if (n%i==0){
            f=1;
            break;
        }        
    }
    if (f==0){
        printf("%d is prime",n);
    }
    else {
        printf("%d is not prime",n);
    }
    return 0;
}