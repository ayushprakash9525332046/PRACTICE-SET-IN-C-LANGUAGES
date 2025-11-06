#include<stdio.h>
int main()
{
   int a[10],size,i,minimum,min_position,maximum,max_position;
   printf("\n please enter the size of an array :");
   scanf("%d",&size);
   printf("\n please enter %d elements of an array :",size);
   for (i=0;i<size;i++){
    scanf("%d",&a[i]);
   }
   minimum=a[0];
   maximum=a[0];
   for (i=1;i<size;i++)
   {
    if (minimum>a[i]){
        minimum=a[i];
        min_position=i;
    }
    if (maximum<a[i]){
        maximum=a[i];
        max_position=i;
    }
   }
   printf("\n smallest element in an array=%d",minimum);
   printf("\n index position of the smallest element=%d\n",min_position);
   printf("\n largest element in an array=%d",maximum);
   printf("\n index position of the largest element=%d",max_position);
   return 0;
}