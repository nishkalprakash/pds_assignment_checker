/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code
Assignment class:- 6
*/
#include <stdio.h>
#define Max 10
struct queue
{
    int frontIndex;
    int rearIndex;
    int a[Max];
    int size; // this variable keeps track of the size of the array.
};
void Enque(int x, int rearIndex, int a[])
{
    a[rearIndex] = x;
}
void Deque(int rearIndex, int a[])
{
    for (int i = 0; i <= rearIndex; i++)
    {
        int j = i + 1;
        a[i] = a[j];
    }
}
int main()
{
    struct queue q;
    q.frontIndex = 0;
    q.size = 0;
    int x;
    printf("Enter the size of your array which must be less than %d\n", Max);
    scanf("%d", &q.size);
    printf("Enter your array\n");
    for (int i = 0; i < q.size; i++)
    {
        scanf("%d", &q.a[i]);
    }
    q.rearIndex = (q.size - 1);
label:
    printf("\n");
    printf("Choose what you want to do\n");
    printf("1.Enque, 2.Deque, 3. Exit\n");
    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        if (q.size >= Max)
        {
            printf("You can not insert any more element as the array reached maximum size\n");
        }
        else
        {
            printf("Enter the element you want to insert\n");
            scanf("%d", &x);
            q.size++;
            q.rearIndex = (q.size - 1);
            Enque(x, q.rearIndex, q.a);
            printf("The queue contains ");
            for (int i = 0; i < q.size; i++)
            {
                printf("%d, ", q.a[i]);
            }
            printf("\n");
        }

        goto label;
        break;
    case 2:
        if (q.size == 0)
        {
            printf("The array is empty\n");
        }
        else
        {
            printf("Removed element %d\n", q.a[q.frontIndex]);
            Deque(q.rearIndex, q.a);
            q.size--;
            q.rearIndex = (q.size - 1);
            printf("The queue contains ");
            for (int i = 0; i < q.size; i++)
            {
                printf("%d, ", q.a[i]);
            }
            printf("\n");
        }
        goto label;
    case 3:

        return 0;
    default:
        printf("Please provide correct input\n");
        goto label;
        break;
    }
    goto label;
    return 0;
}