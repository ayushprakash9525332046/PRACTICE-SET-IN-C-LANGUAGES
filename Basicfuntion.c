#include<stdio.h>
void england(){
    printf("you are in england\n");
    return;
}
void austrilia(){
    printf("you are in austrilia\n");
    england();
    return;
}
void india(){
    printf("you are in india\n");
    austrilia();
    return;
}
int main(){
    india();
    return 0;
}
