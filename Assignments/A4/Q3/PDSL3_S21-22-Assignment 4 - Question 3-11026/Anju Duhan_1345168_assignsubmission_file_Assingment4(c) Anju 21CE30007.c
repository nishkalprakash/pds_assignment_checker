#include<stdio.h>
//Defining structure
struct queue
{
    int first;
    int last;
    int arr[100];
};
//Enque operation
void enque(struct queue *q)
{
    printf("\nEnter the element: ");
    //Entering at last position
    scanf("%d",&q->arr[q->last]);
    q->last++;
    //Printing the queue after enque operations
    printf("The queue conatins: ");
    for(int i=0;i<q->last;i++)
        printf("%d ",q->arr[i]);
    printf("\n");

}

//Deque operation
int deque(struct queue *q)
{
    if(q->last==0)
    {
        printf("The queue is empty.\n");
        return;
    }
    //Removing the last element.
    printf("Removed element  = %d\n",q->arr[0]);
    for(int i=0;i<q->last-1;i++)
        q->arr[i]=q->arr[i+1];
    q->last--;
    //Printing the queue after deque operation
     printf("The queue conatins: ");
    for(int i=0;i<q->last;i++)
        printf("%d ",q->arr[i]);
    printf("\n");
}

int main()
{
    struct queue q;
     q.first=0;
    q.last=0;
    int op;
    printf("Enter the option: 1. Enque, 2. Deque: ");
    scanf("%d",&op);

    //Infinite loop until exit.
    while(1)
    {
        if(op==1)
         enque(&q);
        else if(op==2)
            deque(&q);
        else
            break;
        printf("Enter the option: 1. Enque, 2. Deque, 3.Exit:  ");
        scanf("%d",&op);
    }

}
