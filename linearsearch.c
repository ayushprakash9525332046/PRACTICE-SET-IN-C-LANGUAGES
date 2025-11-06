#include<stdio.h>
int main()
{
    int a[10],k,i,loc=-1;
    printf("enter 10 values\n");
    for (i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("enter search values\n");
    scanf("%d",&k);
    for (i=0;i<10;i++)
    {
        if (a[i]==k)
        {
            loc =i;
            break;
        }
    }
    if (loc==-1)
    printf("%d is not found",k);
    else
    printf("%d is found at %d",k,loc);
    return 0;
}