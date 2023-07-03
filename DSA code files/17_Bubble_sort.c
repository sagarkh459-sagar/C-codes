// Bubble sort
// total number of comparisions = (n(n-1))/2
// time complexity = O(n^2);
// Stable algorithm :- bcs same elements are placed in same order
// Not a recursive algo
// Bubble sort is not an adaptive algo(means if already sorted hai toh sort nhi krega)
// if already sorted and we make it adaptive then time complexity = O(n);
// isme paas paas waalo ko sort kroo or last element fix krdo

#include <stdio.h>

// Applying bubble sort algorithm to sorting
void bubbleSort(int arr[], int n)
{
    int sortedArray = 0; // declared bcs we want to make our algo adaptive
    for (int i = 0; i < n - 1; i++)
    {
        printf("We are running on loop %d\n", i);
        sortedArray = 1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
                sortedArray = 0;
            }
        }
        if (sortedArray == 1)
        {
            return;
        }
    }
}

int main()
{
    printf("Enter size : ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("array after sorting :\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
