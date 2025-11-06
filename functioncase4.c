#include <stdio.h>
int addition()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
}
int main()
{
    int a, b = 10, c = 12;
    a = addition();
    a = b + c;
    printf("\n%d", a);
}