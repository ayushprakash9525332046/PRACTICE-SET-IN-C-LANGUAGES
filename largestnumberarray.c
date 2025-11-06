#include<stdio.h>
int main()
{
    int a[100],i,largest;
    printf("enter 10 values\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for (i=1;i<10;i++)
    {
        if(a[i]>largest){
            largest=a[i];
        }
    }
    printf("largest no=%d",largest);
    return 0;
}