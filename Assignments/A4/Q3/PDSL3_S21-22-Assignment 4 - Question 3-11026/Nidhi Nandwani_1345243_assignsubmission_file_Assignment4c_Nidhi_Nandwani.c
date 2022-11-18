/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

typedef struct
{
    int list[25]; // creating a list of max 25 elements to perform queue operations
    int f;
    int r;
} queue;

void enque(queue *e, int num)
{
    e->list[e->r + 1] = num; // adding the number at the end
    e->r += 1;
}

void deque(queue *d)
{
    int temp;
    for (int i = 0; i < d->r; i++)
    {
        temp = d->list[i + 1];
        d->list[i] = temp; // shifiting the array elements
    }
    d->r -= 1;
}

int main()
{
    queue l;
    int c;
    l.r = -1;
    int flag = 1;
    while (flag > 0)
    {

        printf("\nEnter the option 1.Enque 2.Deque 3.Exit\n");
        scanf("%d", &c);
        if (c == 1)
        {
            int num;
            printf("Enter the element: ");
            scanf("%d", &num);
            if (l.r >= 25)
            {
                printf("Overflow");
            }
            else
            {
                enque(&l, num);
                printf("The queue contains: ");

                for (int i = 0; i <= l.r; i++)
                {
                    printf("%d ", l.list[i]);
                }
            }
        }
        else if (c == 2)
        {
            if (l.r < 0)
            {
                printf("The queue is empty");
            }
            else
            {
                deque(&l);
                printf("The queue contains: ");
                for (int i = 0; i <= l.r; i++)
                {
                    printf("%d ", l.list[i]);
                }
            }
        }

        else if (c == 3)
        {
            flag = 0;
        }
    }
}