#include <stdio.h>

void rearrange(int *x, int *y, int *z);

int main()
{
    int x, y, z;
    int *ptr1 = &x, *ptr2=&y, *ptr3=&z; // pointers for x,y and z
    printf("Enter any 3 integers=\n ");
    scanf("%d%d%d", &x, &y, &z);
    printf("*Before function call*\n\n\n");

    printf("The address of x is %p and its value is %d\n", &x, x);
    printf("The address of y is %p and its value is %d\n", &y, y);
    printf("The address of z is %p and its value is %d\n", &z, z);

    // fucntion call
    rearrange(ptr1, ptr2, ptr3);
    printf("\n*After function call*\n\n\n");

    printf("The address of x is %p and its value is %d\n", &x, x);
    printf("The address of y is %p and its value is %d\n", &y, y);
    printf("The address of z is %p and its value is %d\n", &z, z);

    return 0;
}

void rearrange(int *x, int *y, int *z)
{
    int temp;
    int arr[3];
    arr[0] = *x;
    arr[1] = *y;
    arr[2] = *z;
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
    *x = arr[0];
    *y = arr[1];
    *z = arr[2];
}
