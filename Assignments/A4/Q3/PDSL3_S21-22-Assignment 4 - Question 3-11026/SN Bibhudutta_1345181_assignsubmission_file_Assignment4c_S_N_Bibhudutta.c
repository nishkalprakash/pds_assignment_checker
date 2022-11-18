// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 4

#include<stdio.h>

#define MAX_Q_SIZE 100

typedef struct{
    int key;
}element;

typedef struct {
    
    element list[MAX_Q_SIZE];
    int front,rear;

}queue;

int isfull(queue *q)
{
    if(q->front==((q->rear)+1)%MAX_Q_SIZE)
    return 1;

    return 0;
}

int isempty(queue*q)
{
    if(q->front==q->rear)
    return 1;

    return 0;
}

element front(queue*q)
{

    return q->list[(q->front+1)%MAX_Q_SIZE];
}

void enqueue(queue*q,element e)
{
    q->rear=(q->rear+1)%MAX_Q_SIZE;

    q->list[q->rear]=e;

}

void dequeue(queue*q)
{
    q->front=(q->front+1)%MAX_Q_SIZE;
}

void print(queue * q)
{
    for (int i =q->front+1; i <=q->rear ; i++)
    {
        printf("%d ,",q->list[i]);
    }
    
}


int main()
{
     queue q;
     q.front=-1;
     q.rear=-1;
     //INTIALIZING QUEUE

   
    printf("\nENTER THE OPTION 1.Enque,2.Deque ");
    int option;
    scanf("%d",&option);

    while (1)
    {

        if(option==1) //ENQUE
        {
            element e;
            printf("\nEnter the element ");
            scanf("%d",&e);
            enqueue(&q,e);
            printf("\nThe queue contain :");
            print(&q);
            
        }
        if(option==2)//DEQUE
        {
            if(isempty(&q))
            {
                printf("\nThe queue is empty!");
            }
            else
            {
                printf("The Remove Element is %d",front(&q));
                dequeue(&q);
                printf("\nThe queue contain :");
                print(&q);
            }
        }
        if(option==3)//EXIT
        {
            return 0;
        }
        
        printf("\nENTER THE OPTION 1.Enque,2.Deque,3.Exit ");
        scanf("%d",&option);    


    }
    

}