#include<stdio.h>
int main()
{
    int a[10],i,loc=-1,beg=0,end=9,m,k;
    printf("enter 10 values \n");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("enter search values");
    scanf("%d",&k);
    while (loc!=-1&&beg<=end){
        m=(beg+end)/2;
        if (k==a[m])
        loc=m;
        else if(k>a[m])
        beg=m+1;
        else
        end=m-1;
    }
    if (loc==-1)
    printf("%d is not found",k);
    else
    printf("%d is found at %d",k,loc);
    return 0;
}