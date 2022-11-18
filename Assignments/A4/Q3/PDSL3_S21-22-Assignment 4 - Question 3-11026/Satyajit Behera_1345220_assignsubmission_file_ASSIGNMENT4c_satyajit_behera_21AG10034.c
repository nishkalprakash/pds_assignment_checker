// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int front;
    int data;
    int rear;
};

int main()
{
    // Initialisation of variables
    struct Queue q[200];
    int m;
    int t = 0;
    int h = 0;
    int x;

    for (int i = 1; i > -1; i++)
    {
        printf("\n Enter the option : 1.Enque,2.Deque,3.exit\n");
        scanf("%d", &m);

        if (m == 3)
        {
            break;
        }
        else if (m == 1)
        {
            printf("enter the element-");
            scanf("%d", &x);
            q[t].front = t;
            q[t].data = x;
            q[t].rear = t + 1;
            t++;
            // it will add the element
        }
        else if (m == 2)
        {

            if (h == t)
            {
                printf("queue is empty");
                continue;
                // it will remove the element
            }
            x = q[h].data;
            printf("removing %d\n", q[h].data);
            h = q[h].rear;
        }
        // It will print the elements
        printf("the queue contains-");
        for (int j = h; j < t; j++)
        {

            printf("%d,", q[j].data);
        }
        printf("\n");
    }

    return 0;
}
