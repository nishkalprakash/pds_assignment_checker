// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
void enqueue(int a[], int rear)
{
    printf("Enter number you want to enqueue: ");
    int n;
    scanf("%d", &n);
    a[rear] = n;
}
int dequeue(int a[], int rear)
{
    int temp = a[0];
    for (int i = 0; i < rear; i++)
        a[i] = a[i + 1];
    return temp;
}
int main()
{
    int a[1000];
    int rear = -1;
    printf("Enter the option: 1.Enqueue  2.Dequeue  3.Exit\n");
    int c;
    scanf("%d", &c);
    while (1)
    {
        switch (c)
        {
        case 1:
            enqueue(a, rear + 1);
            rear = rear + 1;
            break;
        case 2:
            if (rear == -1)
            {
                printf("The queue is empty!\n");
                break;
            }
            int x = dequeue(a, rear);
            if (rear >= 0)
            {
                rear = rear - 1;
            }
            printf("Removed element: %d\n", x);
            break;
        case 3:
            return 0;
        default:
            printf("Invalid Input.\n");
        }
        if (rear >= 0)
        {
            printf("The queue contains: ");
            for (int i = 0; i <= rear; i++)
                printf("%d,", a[i]);
            printf("\b \n");
        }
        printf("Enter the option: 1.Enqueue  2.Dequeue  3.Exit\n");
        scanf("%d", &c);
    }
}
