#include<stdio.h>
int main(){
    int a[10]={1,2,3,4,5},n,loc,temp,i;
    printf("enter a number");
    scanf("%d",&n);
    printf("enter a loc");
    scanf("%d",&loc);
    temp=a[loc];
    for (i=0;i<10;i++){
        if(i==loc){
            a[i]=n;
            a[5]=temp;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}