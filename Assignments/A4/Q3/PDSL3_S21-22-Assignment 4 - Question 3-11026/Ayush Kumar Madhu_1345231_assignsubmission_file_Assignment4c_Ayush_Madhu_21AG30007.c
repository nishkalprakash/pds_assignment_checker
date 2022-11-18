// NAME - AYUSH KUMAR MADHU
// ROLL NO - 21AG30007
// SECTION - 03
// DEPT- AGRICULTURE AND FOOD ENGINEERING

#include <stdio.h>
#include <stdlib.h>

// Defining a Struct
struct Queue
{
    int front;
    int data;
    int rear;
};

int main()
{
    // Initialisation of variables
    struct Queue arr[200];
    int m;
    int a1 = 0;  // a1 = tail
    int a2 = 0;  // a2 = head
    int x;

    for (int i = 1; i > -1; i++)
    {
        printf("\nEnter the option : \n");
        printf("1. Enque\n");
        printf("2. Deque\n");
        printf("3. Exit\n");
        scanf("%d", &m);

        if (m == 3)
        {
            break;
        }
        else if (m == 1)
        {
            // It will add the elements entered by the user
            printf("Enter the element-");
            scanf("%d", &x);
            arr[a1].front = a1;
            arr[a1].data = x;
            arr[a1].rear = a1 + 1;
            a1++;
        }
        else if (m == 2)
        {
            if (a2 == a1)
            {
                printf("The queue is empty");
                continue;
            }
            x = arr[a2].data;

            // It will remove the last element
            printf("Removing %d\n", arr[a2].data);
            a2 = arr[a2].rear;
        }

        printf("The queue contains elements : ");
        for (int j = a2; j < a1; j++)
        {
            // It will print the elements
            printf("%d,", arr[j].data);
        }
        printf("\n");
    }

    return 0;
}