#include <stdio.h>

void insertionSort(int arr[], int n)
{
    if (n <= 1)
        return;

    insertionSort(arr, n - 1);

    int key = arr[n - 1];
    int j = n - 2;

    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = 5;

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}