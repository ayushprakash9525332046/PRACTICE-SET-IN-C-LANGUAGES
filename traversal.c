#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    display(arr, size);
}