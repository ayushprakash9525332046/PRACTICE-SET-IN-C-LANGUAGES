#include<stdio.h>
int main(){
    int T,F=0,S=1,n,i;
    printf("enter a number :");
    scanf("%d",&n);
    printf("%d %d",F,S);
    for (i=2;i<n;i++){
        T=F+S;
        printf("%d",T);
        T=S;
        S=F;
    }
    return 0;
}