#include <stdio.h>

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quickSort(int arr[], int low , int high)
{
    int partitionindex ;

    partitionindex = p


}

int main()
{
    int arr[] = {99, 63, 24, 87, 68};
    int n = 5;
    printf("Array before sorting : ");
    printarray(arr, n);
    quickSort(arr, 0 , 4);
    printf("Array after sorting : ");
    printarray(arr, n);
}