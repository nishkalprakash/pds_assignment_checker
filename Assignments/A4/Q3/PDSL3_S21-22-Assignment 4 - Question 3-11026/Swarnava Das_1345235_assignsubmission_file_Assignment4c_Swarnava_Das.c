// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
#define MAX 10
typedef struct // own data type declaration
{
    char arr[MAX]; // my max is 10(using #define)
    int f;
    int r;
} abc;

abc enque(abc s, int x)
{
    s.arr[s.r] = x;
    
    return s;
}
abc deque(abc s)
{
    int i;
    for (i = 1; i < MAX; i++)
    {
        s.arr[i - 1] = s.arr[i];
        return s;
    }
}
int main()
{
    int n,  i;
    char x;

    abc s, p; // structure declaration
    s.f = -1;
    s.r = 0;
    while (1)
    {
        printf("ENTER THE OPTION(1 FOR ENQUE & 2 FOR DEQUE & 3 for exit)\n");
        scanf("%d", &n);
        if (n == 1)
        {
            if (s.r < 9)
            {
                printf("enter the element\n");getchar();
                scanf("%c", &x);
                p = enque(s, x);
                printf("the queue contains:");
                for (i = 0; i <= s.r; i++)
                {
                    printf("%c", (s.arr[i]));
                    printf(",");
                }

                printf("\n");
                (s.r)++;
                if (s.r == 1)
                {
                    s.f == 0;
                }
            }
            else
            {
                printf("overflow\n");
                continue;
            }
        }
        else if (n == 2)
        {
            if (s.r > 0)
            {

                p = deque(s);
                printf("removed element:%c\n", s.arr[s.f]);
                (s.r--);
                printf("the queue contains:");
                for (i = 0; i <= s.r; i++)
                {
                    printf("%c", s.arr[i]);
                    printf(",");
                }

                printf("\n");
            }
            else if (s.r == 0)
            {
                p = deque(s);
                printf("removed element:%c\n", s.arr[s.f]);
                (s.f--);
                printf("the queue is empty\n");
                continue;
            }
            else if (s.f == -1)
            {
                printf("underflow!\n");
                continue;
            }
        }
        else if (n == 3)
        {
            break;
        }
    }
    return 0;
}
