#include <stdio.h>

// code for inseerting an element
void set(int arr[], int index, int num)
{
    arr[index] = num;
}

int main()
{
    int n;
    scanf("%d", &n);
    // create array
    int arr[n];

    set(arr, 0, 1);
    set(arr, 1, 2);
    set(arr, 2, 3);
    set(arr, 3, 4);
    set(arr, 4, 5);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}