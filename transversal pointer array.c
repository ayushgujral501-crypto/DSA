#include <stdio.h>

void traverse(int *ptr, int n)
{
    if (n == 0)
        return;

    printf("%d ", *ptr);

    traverse(ptr + 1, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    traverse(arr, 5);

    return 0;
}