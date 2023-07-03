// Insertion Sort Algo
// inserting an element in sorted array
// Time complexity :- Worst Case -> O(n^2)    Best Case -> O(n)
// Total comparision = (n(n-1))/n;
// Stable algo
// Adaptive algo
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    int j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i -1;
        while (j >= 0 && arr[j] > key)
        {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("array after sorting :\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}