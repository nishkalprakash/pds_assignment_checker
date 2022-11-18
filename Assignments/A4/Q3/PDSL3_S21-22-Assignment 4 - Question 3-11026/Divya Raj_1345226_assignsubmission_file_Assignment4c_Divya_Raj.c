/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : Codeblock
*/

#include <stdio.h>
#include<stdlib.h>
#define MAX 50      //max entry is set to 50 by me
 
void enque();
void deque();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    while (1)
    {
        printf("1.Enque element to queue \n");
        printf("2.Deque element from queue \n");
        printf("3.Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enque();
            display();
            break;
            case 2:
            deque();
            display();
            break;
            case 3:
            exit(1);
            default:
            printf("Wrong choice \n");
        }       //End of switch 
    }           //End of while
    return 0;       
}               //End of main() 
 
void enque()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        //If queue is initially emp
        front = 0;
        printf("Enque the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}   //End of enque()
 
void deque()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element dequed from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}   //End of deque()
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("The queue contains : ");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n\n");
    }
}   //End of display()