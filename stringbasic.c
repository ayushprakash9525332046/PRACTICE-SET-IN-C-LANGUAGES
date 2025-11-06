#include<stdio.h>
int main(){
    char arr[]={'h','e','l','l','o','\0'};
   //for (int i=0;i<5;i++){
   // printf("%c ",arr[i]);
   //}
   int i=0;
   while(arr[i]!='\0'){
    printf("%c ",arr[i]);
    i++;
   }
    return 0;
}