#include <stdio.h>
#include<stdlib.h>
#define MAX 50
//define structure.
typedef struct queue
{
    int rear, front;
    int data[MAX];
} queue;
int queue_array[MAX];
int rear = - 1;
int front = - 1;
//function to add elements in the queue.
void enque()
{
    int item;
    if(rear == MAX - 1)
        printf("Queue Overflow n");
    else
    {
        if(front== - 1)
            front = 0;
        printf("Enter the element : ");
        scanf("%d", &item);
        rear = rear + 1;
        rear = item;
        printf("The queue contains %d.\n", item);

    }
}
//function to delete items from the queue.
void deque(){
        if(front == - 1 || front > rear)
        {
            printf("Queue Underflow n");
            return;
        }
        else
        {
            printf("Removed Element : %dn", queue_array[front]);
            front = front + 1;

        }
}

int main()
{
    queue q;
    int rear = - 1;
    int front = - 1;
    int choice;
    while (1)
    {
        printf("1.Enque \n");
        printf("2.Deque \n");
        printf("3.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            exit(1);
        default:
            printf("Wrong choice n");
        }
    }

    return 0;
}

