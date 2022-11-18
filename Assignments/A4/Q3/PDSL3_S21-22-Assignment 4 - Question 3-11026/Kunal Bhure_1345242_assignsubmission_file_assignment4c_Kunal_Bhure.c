#include <stdio.h>
# define MAX 100
void enque();
void deque();
void show();
struct queue
{
    int inp_arr[MAX];
    int rear;
    int Front;
};
    struct queue q;

int main()
{
    int n,flag=0;
    q.rear=-1;
    q.Front=-1;
    while (1)
    {
        if(flag==0)
        {
            printf("Enter the option: 1. Enque, 2. Deque\n");
            scanf("%d", &n);
            switch (n)
            {
                case 1:
                enque();
                break;
                case 2:
                deque();
                break;
                default:
                printf("Incorrect choice \n");
            }
        }
        else
        {
            printf("\nEnter the option: 1. Enque, 2. Deque, 3. Exit\n");
            scanf("%d", &n);
            switch (n)
            {
                case 1:
                enque();
                break;
                case 2:
                deque();
                break;
                case 3:
                exit(0);
                default:
                printf("Incorrect choice \n");
            }
        }
        flag++;
    }
}

void enque()
{
    int insert_item;
    if (q.rear == MAX - 1)
       printf("Overflow \n");
    else
    {
        if (q.Front == - 1)

        q.Front = 0;
        printf("Enter the element: ");
        scanf("%d", &insert_item);
        q.rear = q.rear + 1;
        q.inp_arr[q.rear] = insert_item;
        show();
    }
}

void deque()
{
    if (q.Front == - 1 || q.Front > q.rear)
    {
        printf("The queue is empty!\n");
        return ;
    }
    else
    {
        printf("Removed element %d\n", q.inp_arr[q.Front]);
        q.Front = q.Front + 1;
        show();
    }
}

void show()
{
    if (q.Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("The queue contains ");
        for (int i = q.Front; i <= q.rear; i++)
        {
            if(i<q.rear)printf("%d, ", q.inp_arr[i]);
            if(i==q.rear)printf("%d", q.inp_arr[i]);
        }
    }
}
