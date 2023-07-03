// Selection Sort Algo
// possible comparision :- O(n^2)
// max swaps = n-1
// Not an Stable algo
// Not an Adapive algo

#include <stdio.h>

int main()
{
    int n;
    printf("Size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter element of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int mini = 0;
    for (int i = 0; i < n - 1; i++)
    {
        mini = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int swap = arr[mini];
        arr[mini] = arr[i];
        arr[i] = swap;
    }

    // Printing the sorted array
    printf("sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}