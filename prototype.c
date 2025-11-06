#include<stdio.h>
void england(){
    printf("you are in england\n");
    return ;
}
void austrilia(){
    printf("you are in austrilia\n");
    void england();
    england();
}
void india(){
    printf("you are in india\n");
    void austrilia();
    austrilia();
}
int main(){
    india();
    return 0;
}
