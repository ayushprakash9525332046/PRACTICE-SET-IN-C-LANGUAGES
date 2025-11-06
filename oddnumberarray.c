#include<stdio.h>
int main()
{
    int a[10],i,count=0;
    printf("enter 10 number");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<10;i++)
    {
        if (a[i]%2!=0)
        count++;
    }
    printf("total odd no=%d",count);
    return 0;
}