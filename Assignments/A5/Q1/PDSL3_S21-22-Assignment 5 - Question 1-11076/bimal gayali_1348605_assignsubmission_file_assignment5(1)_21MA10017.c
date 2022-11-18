/*************************
*Section:3
*Roll No:21MA10017
*Name:Bimal Gayali
*Assignment No:5 (1)

*******/

#include <stdio.h>

void rearrange(int *a, int *b, int *c);

int main()
{
    int a, b, c;
    int *p1 = &a, *p2=&b, *p3=&c; // pointers for a b c
    printf("Enter 3 integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("**Before function call**\n\n");

    printf("The address of a is %p and its value is %d\n", &a, a);
    printf("The address of b is %p and its value is %d\n", &b, b);
    printf("The address of c is %p and its value is %d\n", &c, c);

    // fucntion call
    rearrange(p1, p2, p3);
    printf("\n**After function call**\n\n");

    printf("The address of a is %p and its value is %d\n", &a, a);
    printf("The address of b is %p and its value is %d\n", &b, b);
    printf("The address of c is %p and its value is %d\n", &c, c);

    return 0;
}

void rearrange(int *a, int *b, int *c)
{
    int temp;
    int arr[3];
    arr[0] = *a;
    arr[1] = *b;
    arr[2] = *c;
    for (int i = 0; i < 3; i++)
    {

        for (int j = i + 1; j < 3; ++j)
        {

            if (arr[i] > arr[j])
            {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // giving back values to a  b and c
    *a = arr[0];
    *b = arr[1];
    *c = arr[2];
}
