// #include<stdio.h>
// int main(){
//     int A,B,C;
//     printf("enter first number");
//     scanf("%d",&A);
//     printf("enter second number");
//     scanf("%d",&B);
//     printf("enter third number");
//     scanf("%d",&C);
//     if(A>B&&A>C){
//         printf("%d",A);
//     }
//     else if(B>A&&B>C){
//         printf("%d",B);
//     }
//     else{
//         printf("%d",C);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int A=2,B=3,C=4;
    if(A>B){
        if(A>C){
            printf("%d",A);
        }
        else{
            printf("%d",C);
        }
    }
    else{
        if (B>C){
            printf("%d",B);
        }
        else{
            printf("%d",C);
        }
    }
    return 0;
}