#include<stdio.h>
int main()
{
    int a[10],i,j,small,s,k;
    printf("enter 10 values\n");
    for (i=0;i<10;i++)
    scanf("%d",&a[i]);
    for (i=0;i<10;i++){
        small=a[i];
        k=i;
        for (j=i+1;j<10;j++){
            if (small>a[j]){
                small=a[j];
                k=j;
            }
        }
        if (i!=k){
            a[k]=a[i];
            a[i]=small;
        }
    }
    printf("selection array\n");
    for (i=0;i<10;i++)
    printf("%d ",a[i]);
}