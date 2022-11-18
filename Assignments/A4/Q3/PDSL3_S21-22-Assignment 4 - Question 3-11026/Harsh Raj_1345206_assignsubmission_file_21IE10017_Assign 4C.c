#include<stdio.h>
#define MAX 10

/*  Name : Harsh Raj
    Roll : 21IE10017   */

struct queue
{
    int front;
    int rear;
    int A[MAX];
}a;
int main()
{
    int n,i,j;
    i=1;
    a.front=a.rear=-1;
    do
    {
        printf("Press 1 for enque 2 for deque and 3 for exit \n");
        scanf("%d",&n);
        if(n==1)                                                       /*  Enter the element in queue  */
        {
            if(a.front==-1)                                            /* If its the first element   */
            {
                a.rear=a.front=0;
                printf("Enter the Element \n");
                scanf("%d",&a.A[a.rear]);
                printf("The queue contains ");
               for(j=a.front;j<=a.rear;j++)                            /* Printing the queue   */
               {
                  printf("%d ",a.A[j]);
               }
               printf("\n");
            }
            else                                                        /* Normally adding element   */
            {
                a.rear=a.rear+1;
                printf("Enter the Element \n");
                scanf("%d",&a.A[a.rear]);
                printf("The queue contains ");
                for(j=a.front;j<=a.rear;j++)                            /* Printing the queue   */
                {
                   printf("%d ",a.A[j]);
                }
                printf("\n");
            }
        }
        else if(n==2)                                                    /* Deleting the first element */
            if(a.rear==-1)                                               /* If the queue is empty already */
           {
            printf("The queue is Empty! \n");
           }
           else
           {
               a.front=a.front+1;
               printf("The queue contains ");
               for(j=a.front;j<=a.rear;j++)                             /* Printing the queue   */
               {
                  printf("%d ",a.A[j]);
               }
               printf("\n");
           }
        if(n==3)                                                        /* Exiting the program  */
        {
            i=0;
            if(a.rear==-1)                                              /* If the queue is empty  */
            {
            printf("The queue is Empty! \n");
            }
            else
            {
                printf("The queue contains ");
                for(j=a.front;j<=a.rear;j++)                             /* Printing the queue   */
                {
                printf("%d ",a.A[j]);
                }
                printf("\n");
            }
        }
    }while (i);                                                          /* Checking the loop condition  */
}
