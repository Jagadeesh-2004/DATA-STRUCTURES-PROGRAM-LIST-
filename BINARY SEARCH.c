#include<stdio.h>
int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right)
	{
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
int main()
{
    int i, n, target;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers in sorted order:\n", n);
    for ( i = 0; i < n; ++i)
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1)
        printf("Element is not present in the array.\n");
    else
        printf("Element is present at index %d.\n", result);
    return 0;
}
