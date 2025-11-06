#include <stdio.h>
int addition(int b, int c)
{
    printf("enter a number:");
    scanf("%d %d", &b, &c);
    return b + c;
}
int main()
{
    int a, b, c;
    a = addition(b, c);
    printf("%d", a);
}