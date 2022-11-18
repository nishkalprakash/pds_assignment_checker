/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

//defining structure
struct queue
    {
        int start;
        int end;
        int list[20];
    };

void enque(struct queue* aq)      //aq is address of q
{
    aq->end++;
    printf("Enter the element : ");
    scanf("%d",&aq->list[aq->end]);   //taking input from the user
    printf("The queue contains : ");
    printf("%d",aq->list[0]);
    for(int i=1;i<=aq->end;i++)       //printing the queue
    {
        printf(", %d",aq->list[i]);
    }
    printf("\n\n");
}

void deque(struct queue* aq)
{
    //empty case
    if(aq->end==-1)
    {
        printf("The queue is empty\n\n");
        return;
    }

    //one element case
    if(aq->end==0)
    {
        printf("Deleted element : %d\n",aq->list[0]);
        printf("The queue is empty\n\n");
        aq->end--;
        return;
    }

    //general case

    printf("Deleted element : %d\n",aq->list[0]);
    for(int i=0;i<aq->end;i++)   //rearranging the array by deleting the first element
    {
        aq->list[i]=aq->list[i+1];
    }
    aq->end--;
    printf("The queue contains : ");
    printf("%d",aq->list[0]);
    for(int i=1;i<=aq->end;i++)   //printing the queue
    {
        printf(", %d",aq->list[i]);
    }
    printf("\n\n");
}

int main()
{
    int inp;
    struct queue q;
    q.end=-1;
    while(1)
    {
        printf("Enter the option: 1. Enque, 2. Deque, 3. Exit : ");
        scanf ("%d",&inp);
        //taking input
        if (inp==3) return 0;
        else if (inp==1) enque(&q); //passing structure by reference
        else deque(&q);
    }
    return 0;
}

