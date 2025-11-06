#include<stdio.h>
int main(){
    int a[5],i;
    printf("enter a number:");
    for (i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<=4;i++){
        if (a[i]%2==0){
            printf(" %d is even number",a[i]);
        }
        else{
            printf(" %d is odd number",a[i]);
        }
    }
    return 0;
}