#include<stdio.h>
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int insertion(int arr[],int element,int size,int capacity,int index){
//     if(size>=capacity){
//         return -1;
//     }
//       for(int i=size-1;i>=index;i--){
//         arr[i+1]==arr[i];
//       }
//       arr[index]=element;
// }
// int main(){
//     int arr[50]={1,2,3,4,5};
//     int element=34,size=5,index=2;
//     display(arr,size);
//     insertion(arr,element,size,50,index);
//     size+=1;
//     display(arr,size);
    
// }
int main(){
    int i,size=5,pos=2,element=89,arr[10]={1,2,3,4,5};
    for ( i = size; i>=pos; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    size++;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}