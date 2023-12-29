#include<stdio.h>
int linearSearch(int arr[], int size, int Selement)
{
    int i;
    for(i=0;i<size;i++)
	{
        if(arr[i]==Selement)
		{
            return i;
        }
    }
    return -1;
}
int main()
{
	int i;
    int arr[50];
    int size, Selement, result;
    printf("Enter the size of the array (max 50): ");
    scanf("%d", &size);
    if(size<=0||size>50)
	{
        printf("Invalid size entered.\n");
        return 0;
    }
    printf("Enter %d elements for the array:\n", size);
    for(i=0;i<size;i++)
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &Selement);
    result = linearSearch(arr, size, Selement);
    if(result!=-1)
	{
        printf("Element found at index %d.\n", result);
    }
	else
	{
        printf("Element not found in the array.\n");
    }
    return 0;
}
