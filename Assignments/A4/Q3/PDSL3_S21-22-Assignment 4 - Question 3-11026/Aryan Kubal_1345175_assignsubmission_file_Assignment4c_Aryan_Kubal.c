/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};
// function implementing deque
int deque()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("The queue is empty!\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
// function implementing enque
void enque(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is Full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}
// function to print the queue
void printqueue(struct Node *ptr)
{
    if (ptr != NULL)
    {

        printf("The queue contains: ");
        while (ptr != NULL)
        {
            printf("%d, ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int main()
{
    int i;
    do
    {
        printf("Enter the option: 1.Enque, 2.Deque, 3.Exit\n"); // Taking input from the user about the option
        scanf("%d", &i);
        if (i == 1)
        {
            int n;
            printf("Enter the element: "); // Taking input from the user about the element
            scanf("%d",&n);
            printf("\n");
            enque(n);
            printqueue(f);
        }
        else if (i == 2)
        {
            int x = deque();
            printqueue(f);
        }

    } while (i != 3);
}