/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

int main()
{
    struct queue
    {
        int front[3];
        int rear[3];
    }a, b, c;

    int n, i;

    // sizeMAX = 3.
    for (i = 0; i<3; i++)
    {
        a.front[-2]=0;
        a.front[-1]= 0;
        //enter the option 1 for Enque, 2 for Deque, 3 for Exit
        printf("Enter the option:");
        scanf("%d", &n);
        if (n == 1)
        {
            // enter the integer.
            printf("Enter the element: ");
            scanf("%d", &a.front[i]);

            // output of elements of queue.
            printf("The queue contains %d,%d,%d\n", a.front[i-2], a.front[i-1],a.front[i]);
        }
        else if ( n == 2)
        {
            // enter the  integer.
            printf("Enter the element: ");
            scanf("%d", b.front[i]);

            // if queue contain this number then is should be removed from the queue.
            if ( a.front[i-1]== b.front[i])
            {
                a.front[i-1]-=b.front[i];
                printf("The queue contains %d", a.front[i-1]);
            }
            else
            {
                printf("The queue don't contains this number.\n");
            }
        }
    }

}
