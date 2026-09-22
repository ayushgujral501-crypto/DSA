#include <stdio.h>

void selectionSort(int arr[], int n, int i)
{
    if (i == n - 1)
        return;

    int min = i;

    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min])
            min = j;
    }

    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;

    selectionSort(arr, n, i + 1);
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    selectionSort(arr, n, 0);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}