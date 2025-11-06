#include<stdio.h>
int main()
{
    int a[10],i,j,t;
    printf("enter 10 values\n");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    for (i=0;i<9;i++)
    {
        for (j=0;j<8-i;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("sorted array :\n");
    for (i=1;i<10;i++)
    printf("%d",a[i]);
    return 0;
}