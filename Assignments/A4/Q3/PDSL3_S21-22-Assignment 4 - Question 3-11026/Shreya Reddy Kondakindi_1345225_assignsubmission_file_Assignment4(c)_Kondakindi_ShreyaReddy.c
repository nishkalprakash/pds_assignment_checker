/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
#define MAX 50
int queue_array[MAX];
int rear=-1;
int front=-1;
void enqueue();
void dequeue();

void main()
{

    int choice;
    while(1)
    {
        printf("1.enqueue element to queue \n");
        printf("2.dequeue element from queue \n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            default:
                printf("wrong choice\n");
        }
    }


}
void enqueue()
{
    int add_item;
    if(rear==MAX-1)
    {
        printf("queue overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("insert the element in queue:");
        scanf("%d",&add_item);
        rear=rear+1;
        queue_array[rear]=add_item;
    }
}
void dequeue()
{

    if(front==-1||front>rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("element dequeued from queue is :%d\n",queue_array[front]);
        front=front+1;
    }
}
