#include<stdio.h>
int main(){
    int n,sum=0,r;
    printf("enter a number:");
    scanf("%d",&n);
      while(n>0){
         r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
   if (n==sum){
        printf("%d is armstrong",sum);
    }
    else{
        printf("%d is not armstrong",sum);
    }
    return 0;
}