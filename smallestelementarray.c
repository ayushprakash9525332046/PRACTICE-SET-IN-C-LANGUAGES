#include<stdio.h>
main(){
    int i,a[5]={78,71,72,45,54},small=0;
    // printf("enter a number :");
    // for (i=0;i<=4;i++){
    //     scanf("%d",&a[i]);
    // }
    small=a[0];
    for (i=0;i<=4;i++){
        if (small>a[i]){
            small=a[i];
        }
    }
    printf("%d",small);
    
    }