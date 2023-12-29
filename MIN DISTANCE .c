#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, target1, target2, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter %d elements for the array:\n", size);
    for (i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the first target value: ");
    scanf("%d", &target1);
    printf("Enter the second target value: ");
    scanf("%d", &target2);
    int index1 = -1, index2 = -1;
    int minDist = size;
    for (i = 0; i < size; i++)
	{
        if (arr[i] == target1)
		{
            index1 = i;
            if (index2 != -1)
			{
                minDist = abs(index1 - index2) < minDist ? abs(index1 - index2) : minDist;
            }
        }
        if (arr[i] == target2)
		{
            index2 = i;
            if (index1 != -1)
			{
                minDist = abs(index1 - index2) < minDist ? abs(index1 - index2) : minDist;
            }
        }
    }
    if (index1 == -1 || index2 == -1)
	{
        printf("One or both target values not found in the array.\n");
    } 
	else
	{
        printf("Minimum distance between %d and %d: %d\n", target1, target2, minDist);
    }
    free(arr);
    return 0;
}
