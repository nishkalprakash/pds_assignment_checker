#include <stdio.h>
#include <conio.h>
#include <limits.h>
#define MAX 200000

//creating data structure q as queue
struct queue
{
    int que[MAX];
    int front;
    int rear;
}q;

//main
void main ()
{
    //initiating queue with -1
    int choice;
    q.front=-1;
    q.rear=-1;

    //asking for task
    while(1)
    {
        //printing options
        printf("Enter your option 1.Enque, 2.Deque, 3.Exit\n");
        scanf("%d",&choice);

        //doing task of choice
        switch (choice)
        {
        //if option  1
        case 1:
                    {int num;
                    //check if full
                    if (q.rear==MAX-1)
                    {
                        printf ("\nqueue is Full\n");
                        return;
                    }
                    //add to queue
                    else
                    {
                        printf ("\nEnter the element: ");
                        scanf ("%d", &num);
                        // if first
                        if(q.rear==-1 && q.front==-1){
                            q.rear+=1;
                            q.front+=1;
                            q.que[q.rear] = num;
                            printf("\nThe queue contains %d\n",num);
                            break;
                        }
                        //add to queue if not first
                        else{
                            q.rear+=1;
                            q.que[q.rear] = num;
                        }
                        printf("\nThe queue contains ");
                        for(int i = q.front;i<q.rear;++i){
                            printf("%d, ",q.que[i]);
                        }
                        printf("%d\n",q.que[q.rear]);
                    }
                    break;
                    }
        //if option 2
        case 2:
                    {
                    int num;
                    //if empty
                    if (q.front==-1)
                    {
                        printf ("\nqueue is Empty\n");
                        return;
                    }

                    //removing element
                    else
                    {
                        num = q.que[q.front];
                        printf("\nRemoved element %d \n",num);
                        if(q.front==q.rear){
                            q.front=-1;
                            q.rear=-1;
                            printf ("\nqueue is Empty\n");
                            break;
                        }
                        else{
                        q.front++;
                        }
                    }
                    //printing queue
                    printf("\nThe queue contains ");
                        for(int i = q.front;i<q.rear;++i){
                            printf("%d, ",q.que[i]);
                        }
                        printf("%d\n",q.que[q.rear]);
                    break;
                }
        default:
            return;
        }
    }
    return;
}
