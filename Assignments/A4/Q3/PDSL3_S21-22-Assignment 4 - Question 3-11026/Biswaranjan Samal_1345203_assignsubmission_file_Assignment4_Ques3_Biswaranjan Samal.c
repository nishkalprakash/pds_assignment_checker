/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:4,Question 3
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10001


typedef struct _queue
{
    int front,rear;
    int elements[MAX];
} queue;

int isEmpty(queue Q)
{
    if(Q.front == Q.rear)
        return 1;
    return 0;
}

int isFull(queue Q)
{
    if((Q.rear-Q.front+MAX)%MAX == MAX-1)
        return 1;
    return 0;
}

void print(queue Q)
{
    int i;
    printf("\nThe queue contains:");
    for(i = Q.front; i != Q.rear; i=(i+1)%MAX)
        printf("%d ",Q.elements[i]);
    printf("\n");
}

queue enque(queue Q,int k)
{
    Q.elements[Q.rear] = k;
    Q.rear++;
    print(Q);
    return Q;
}

queue deque(queue Q)
{
    printf("Removed %d",Q.elements[Q.front]);
    Q.front++;
    print(Q);
    return Q;
}

int main()
{
    queue Q;
    Q.front = 0,Q.rear = 0;
//	printf("%d",isEmpty(Q));
    int casee,flag=0;
    while(1)
    {
        printf("Enter the option:1. Enque\t2. Deque\t3. Exit\n");
        scanf("%d",&casee);
        switch(casee)
        {
        case 1:
            if(!isFull(Q))
            {
                int k;
                printf("Enter an element:");
                scanf("%d",&k);
                Q = enque(Q,k);
            }
            else
            {
                printf("Array Overflow\n\n");
            }
            break;
        case 2:
            if(!isEmpty(Q))
            {
                Q = deque(Q);
            }
            else
            {
                printf("Queue is Empty\n\n");
            }
            break;
        case 3:
            flag = 1;
            break;
        default:
            printf("Enter Again!!\n\n");
        }
        if(flag == 1)
            break;
    }
}
