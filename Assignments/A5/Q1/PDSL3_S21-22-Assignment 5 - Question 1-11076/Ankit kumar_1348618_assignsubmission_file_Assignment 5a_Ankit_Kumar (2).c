/*Name: Ankit Kumar
Roll no.21MI10010
Department:Mining*/


#include <stdio.h>

void rearrange(int *a, int *b, int *c);

int main()
{
    int a, b, c;
    int *p1 = &a, *p2=&b, *p3=&c;
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("**Before function call**\n\n");

    printf("address of a is %p and its value is %d\n", &a, a);
    printf("address of b is %p and its value is %d\n", &b, b);
    printf("address of c is %p and its value is %d\n", &c, c);

    // fucntion call
    rearrange(p1, p2, p3);
    printf("\n**After function call**\n\n");

    printf("address of a is %p and its value is %d\n", &a, a);
    printf("address of b is %p and its value is %d\n", &b, b);
    printf("address of c is %p and its value is %d\n", &c, c);

    return 0;
}

void rearrange(int *a, int *b, int *c)
{
    int temp;
    int arr[3];
    arr[0] = *a;
    arr[1] = *b;
    arr[2] = *c;
    for (int s = 0; s < 3; s++)
    {

        for (int t = s + 1; t < 3; ++t)
        {

            if (arr[s] > arr[t])
            {

                temp = arr[s];
                arr[s] = arr[t];
                arr[t] = temp;
            }
        }
    }

    // giving back values to a  b and c
    *a = arr[0];
    *b = arr[1];
    *c = arr[2];
}