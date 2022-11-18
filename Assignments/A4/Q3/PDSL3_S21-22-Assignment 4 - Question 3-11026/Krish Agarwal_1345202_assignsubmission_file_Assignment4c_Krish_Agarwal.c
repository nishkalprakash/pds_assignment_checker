/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS Code
*/
#include <stdio.h>
struct queue
{
    int front;
    int rear;
    int queue_elements[10];
} q;
void enque(int n)
{
    if(q.rear==9)//out of size condition
        printf("Overflow\n");
    else
        q.queue_elements[q.rear++]=n;//inserting the element
}
void deque()
{
    if(q.front==0 && q.rear==0)//Checking emptiness of array
    {
        printf("Underflow\n");
    }
    else
    {//Deleting the element
        printf("The element %d is dequeued.\n", q.queue_elements[q.front++]);
        if(q.front==q.rear)
        {
            q.front = 0;
            q.rear = 0;
        }
    }
}
void display()
{
    if (q.front==0 && q.rear==0)// checking the elements in queue_elementsay
        printf("There is no element in the queue");
    else
    {
        printf("The queue contains : ");//displaying the queue_elementsay
        for (int i=q.front;i<q.rear;i++)
            printf("%d ",q.queue_elements[i]);
    }
    printf("\n");
}
int main()
{
    int choice, n;
    q.front=0;
    q.rear=0;
    while(1)
    {
        printf("Enter the option: 1. Enque, 2. Deque : ");
        scanf("%d",&choice);
        if (choice==1)
        {
            printf("Enter the element : ");
            scanf("%d", &n);
            enque(n);//calling enqueue function
            display();//displaying the current queue
        }
        else if(choice==2)
        {
            deque();//deleting the first element
            display();//displaying the current queue
        }
        else
        break;
    }
   //exiting out when choice is not 1 or 2
    return 0;
}