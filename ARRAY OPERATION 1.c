#include <stdio.h>
int main()
{
    int arr[50];
    int size = 0;
    int choice, position, newValue, i;
    printf("Enter the size of the array (max 50): ");
    scanf("%d", &size);
    if (size > 50 || size <= 0)
	{
        printf("Invalid size entered.\n");
        return 0;
    }
    printf("Enter %d elements for the array:\n", size);
    for (i = 0; i < size; i++)
	{
        scanf("%d", &arr[i]);
    }
    do
	{
        printf("\nArray Operations Menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Update\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
		{
            case 1:
                if (size >= 50)
				{
                    printf("Array is full.\n");
                    break;
                }
                printf("Enter the position to insert: ");
                scanf("%d", &position);
                if (position < 0 || position > size)
				{
                    printf("Invalid position.\n");
                    break;
                }
                printf("Enter the value to insert: ");
                scanf("%d", &newValue);
                for (i = size - 1; i >= position; i--)
				{
                    arr[i + 1] = arr[i];
                }
                arr[position] = newValue;
                size++;
                printf("Element inserted successfully.\n");
                break;
            case 2:
                if (size <= 0)
				{
                    printf("Array is empty.\n");
                    break;
                }
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                if (position < 0 || position >= size)
				{
                    printf("Invalid position.\n");
                    break;
                }
                for (i = position; i < size - 1; i++)
				{
                    arr[i] = arr[i + 1];
                }
                size--;
                printf("Element deleted successfully.\n");
                break;
            case 3:
                printf("Enter the position to update: ");
                scanf("%d", &position);
                if (position < 0 || position >= size)
				{
                    printf("Invalid position.\n");
                    break;
                }
                printf("Enter the new value: ");
                scanf("%d", &newValue);
                arr[position] = newValue;
                printf("Element updated successfully.\n");
                break;
            case 4:
                if (size <= 0)
				{
                    printf("Array is empty.\n");
                    break;
                }
                printf("Array elements: ");
                for (i = 0; i < size; i++)
				{
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
        if (choice != 5 && size > 0)
		{
            printf("Current array: ");
            for (i = 0; i < size; i++)
			{
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
	while (choice != 5);
    return 0;
}
