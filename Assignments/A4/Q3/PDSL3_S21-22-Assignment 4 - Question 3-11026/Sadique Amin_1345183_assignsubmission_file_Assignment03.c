/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/
#include <stdio.h>
#define Max 500
void enque(int a);
void deque();


struct arrop
    {
        int arr[Max];
        int front;
        int rear;
    }x;

int main()
{
    int n;
    x.front=0;
    x.rear=-1;

    while(1)
    {
        printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit \n");
        scanf("%d",&n);
        if(n==1)
        {
            int a;
            printf("Enter the element: ");
            scanf("%d",&a);
            x.rear++;
            enque(a);
        }
        if(n==2)
        {

            x.front++;
            printf("\nRemoved element %d",x.arr[x.front-1]);
            deque();
        }
        if(n==3)
        {
            break;
        }
        if(x.front!=x.rear+1)
        {
            printf("\nThe queue contains:");
        }
        for(int i=x.front;i<=x.rear;i++)
        {
            printf(" %d",x.arr[i]);
        }
        if(x.front==x.rear+1)
        {
            printf("\nThe queue is empty!");
            continue;
        }
        printf("\n");
    }
    return 0;
}

void enque(int a)
{
    x.arr[x.rear]=a;
}

void deque()
{
    x.arr[x.front-1]='\0';
}