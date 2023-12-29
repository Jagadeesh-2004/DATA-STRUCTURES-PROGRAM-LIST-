#include<stdio.h>
int search(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
	{
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[low] <= arr[mid])
		{
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
		else
		{
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, target, i;
    printf("Enter the size of the rotated array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the rotated array: ");
    for ( i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element: ");
    scanf("%d", &target);
    int index = search(arr, n, target);
    if (index == -1)
        printf("Target element not found in the rotated array.\n");
    else
        printf("Target element found at index %d in the rotated array.\n", index);
    return 0;
}
