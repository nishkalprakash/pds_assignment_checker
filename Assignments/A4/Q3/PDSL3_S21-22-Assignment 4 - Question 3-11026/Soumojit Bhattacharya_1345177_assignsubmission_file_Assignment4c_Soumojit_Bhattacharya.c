/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <string.h>
struct queue
{
    int a[100];
    int front;   //front is the position of the first element
    int back;    //back is the position where the next element will be added
}q;
void Enque()
{
    printf("Enter the element:");
    scanf("%d", &q.a[q.back]);    //add element to the queue 
    q.back++;                     //update position of where the next element will be added
}
void Deque()
{
    
    if(q.front<q.back)
    {
        printf("Removed element: %d\n", q.a[q.front]);    //element in front will be removed
        q.front++;                                        //now the old second element will be first element
                                                          //so update front position
    }
                        //if front=back, queue is empty
}

int main()
{
    int n;
    while(1)                                   //takes input for the first time as 1 or 2 and then proceeds
    {
        printf("Enter the option: 1. Enque, 2. Deque\n");
        scanf("%d",&n);
        if(n==1||(n==2))
        break;
        printf("Wrong Input \n");
    }
    while(n!=3)
    {
        if(n==1)
        Enque();
        else
        if(n==2)
        Deque();
        if(q.front>=q.back)                       // -------------------------
        {
            printf("The queue is empty: \n"); 
        }
        else
        {
            printf("queue: ");                         //this part prints  queue
            int i;
            for(i=q.front;i<q.back;i++)
            printf("%d ", q.a[i]);
            printf("\n"); 
        }                             // ___________________________
                                                    
        while(1)                                   //takes input as 1 2 or 3 and then proceeds
        {
            printf("Enter the option: 1. Enque, 2. Deque, 3. Exit \n");
            scanf("%d",&n);
            if(n==1||(n==2||n==3))
            break;
            printf("Wrong Input \n");
        }
    }
    
    return 0;
}