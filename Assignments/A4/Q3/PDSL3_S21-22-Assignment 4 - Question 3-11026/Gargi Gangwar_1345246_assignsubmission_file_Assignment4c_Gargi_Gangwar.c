//C program to implement Queue using structures
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//defining prototype of functions
void ENQUE();
void DEQUE();
void show();

int queue[MAX];
int rear=-1;
int front=-1;

int main()
{
    int choice;
    while(1)
    {
        //input choice of user

        printf("Enter your choice \n");
        printf("1: Insert element to queue \n");
        printf("2: Remove element from queue \n");
        printf("3: Show all elements of queue \n");
        printf("4: Quit \n");
        scanf("%d \n", &choice);
        switch(choice)
        {
            case 1: ENQUE();
                    break;
            case 2: DEQUE();
                    break;
            case 3: show();
                    break;
            case 4: exit(1);
            default: printf("You entered wrong choice");
        }
    }
}

//function for Enqueue i.e. insert element in queue
void ENQUE()
{
    int ele;
    if(rear== MAX-1)
        printf("Queue overflow \n");
    else
    {
        if(front== -1)
            front=0;
        printf("Insert some element to the queue\n");
        scanf("%d\n", &ele);
        rear+=1;
        queue[rear]=ele;
    }
}

//function to Dequeue i.e. remove element from queue
void DEQUE()
{
    if(front == - 1 || front > rear)
    {
        printf("Queue underflow");
        return;
    }
    else
    {
        printf("The element removed from queue is %dn", queue[front]);
        front+=1;
    }
}

//function to display all elements of queue
void show()
{
   int j;
   if(front==-1)
    printf("Queue is empty n");
   else
   {
        printf("Queue is: n");
        for(j=front; j<=rear;j++)
         printf("%d",queue[j]);
         printf("n");
   }
}
