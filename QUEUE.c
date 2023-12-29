#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
struct Queue
{
    int items[MAX_SIZE];
    int front;
    int rear;
    int size;
};
struct Queue* createQueue()
{
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
    return queue;
}
int isEmpty(struct Queue* queue)
{
    return queue->size == 0;
}
int isFull(struct Queue* queue)
{
    return queue->size == MAX_SIZE;
}
void enqueue(struct Queue* queue, int value)
{
    if (isFull(queue))
	{
        printf("Queue is full, cannot enqueue.\n");
    }
	else
	{
        if (queue->rear == MAX_SIZE - 1)
		{
            queue->rear = -1; // Wrap around
        }
        queue->items[++queue->rear] = value;
        queue->size++;
        if (queue->front == -1)
		{
            queue->front = 0;
        }
        printf("Enqueued: %d\n", value);
    }
}
int dequeue(struct Queue* queue)
{
    int item;
    if (isEmpty(queue))
	{
        printf("Queue is empty, cannot dequeue.\n");
        return -1;
    }
	else
	{
        item = queue->items[queue->front];
        queue->size--;
        if (queue->front == MAX_SIZE - 1)
		{
            queue->front = 0; // Wrap around
        }
		else
		{
            queue->front++;
        }
        printf("Dequeued: %d\n", item);
        return item;
    }
}
void display(struct Queue* queue)
{
    int i;
    if (isEmpty(queue))
	{
        printf("Queue is empty.\n");
    }
	else
	{
        printf("Queue elements: ");
        for (i = queue->front; i <= queue->rear; i++)
		{
            printf("%d ", queue->items[i]);
        }
        printf("\n");
    }
}
int main()
{
    struct Queue* queue = createQueue();
    int choice, value;
    do
	{
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
		{
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(queue, value);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }
	while (choice != 0);
    free(queue);
    return 0;
}
