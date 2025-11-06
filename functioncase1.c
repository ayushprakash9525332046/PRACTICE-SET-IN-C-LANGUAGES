#include <stdio.h>
int mult(int a, int b)
{
    return a * b;
}
int main()
{
    int a = 4, b = 6, c;
    c = mult(a, b);
    printf("Multiplication of %d", c);
}