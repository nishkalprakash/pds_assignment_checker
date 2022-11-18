#include <stdio.h>
#include <stdlib.h>
// A structure to represent a queue
struct Queue
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
struct Queue *createQueue(unsigned capacity)
{
    struct Queue *queue = (struct Queue *)malloc(
        sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int *)malloc(
        queue->capacity * sizeof(int));
    return queue;
}

// Queue is full when size becomes
// equal to the capacity
int isFull(struct Queue *queue)
{
    return (queue->size == queue->capacity);
}
// Queue is empty when size is 0
int isEmpty(struct Queue *queue)
{
    return (queue->size == 0);
}
// Function to add an item to the queue.
// It changes rear and size
void enqueue(struct Queue *queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}
void display(struct Queue *queue)
{
    if (isEmpty(queue))
    { // checking whether queue is empty
        printf("Queue is empty\n");
    }
    int i;
    for (i = queue->front; i <= queue->rear; i++)
    {
        printf("%d ", queue->array[i]); // printing queue elements
    }
}
// Function to remove an item from queue.
// It changes front and size
void dequeue(struct Queue *queue, int item)
{
    if (isEmpty(queue))
        printf("The queue is empty!");
    item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    printf("Removed element %d\n", item);
}
// Function to get front of queue
int front(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}
// Function to get rear of queue
int rear(struct Queue *queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}
int main()
{
    struct Queue *queue = createQueue(1000); // initializing queue
    int option;
    while (1)
    {
        printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
        scanf("%d", &option); // input option
        switch (option)
        {
        case 1:
            printf("Enter the element : ");
            int item; // enqueue element case
            scanf("%d", &item);
            enqueue(queue, item);
            printf("The queue contains "); // displaying elements
            display(queue);
            break;
        case 2:
            printf("Enter the element to be removed : ");
            int remitem;
            scanf("%d", &remitem); // dequeue element case
            dequeue(queue, remitem);
            printf("The queue contains "); // displaying elements
            display(queue);
            break;
        default:
            exit(1); // exiting
        }
    }
    return 0;
}
