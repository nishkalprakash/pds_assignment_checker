#include <stdio.h>

void ascending(int *a, int *b, int *c);
//main function
main()
{
    int a, b, c;
    int *u1=&a, *u2=&b, *u3=&c;
    //scanning three integers as input and storing them in
    //three variables namely a,b,c and printing them
    printf("Enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("\n---Before function call---\n");
    //Printing their respective addresses and values
    printf("Address of a=%u.\n",&a);
    printf("Address of b=%u.\n",&b);
    printf("Address of c=%u.\n",&c);
    printf("Values in a,b,c=%d,%d,%d",a,b,c);

    //Calling the function
    ascending(u1, u2, u3);
    printf("   \n");
    printf("\n---After function call---\n");
    //Again Printing their respective addresses and values
    printf("Address of a=%u.\n",&a);
    printf("Address of b=%u.\n",&b);
    printf("Address of c=%u.\n",&c);
    printf("Values in a,b,c=%d,%d,%d",a,b,c);
}
//Function for rearranging the values of a,b,c in non-decreasing order
void ascending(int *a, int *b, int *c)
{
    int temp;
    int arr[3];
    arr[0] = *a;
    arr[1] = *b;
    arr[2] = *c;
    for (int i = 0; i < 3; i++)
    {

        for (int k = i + 1; k < 3; ++k)
        {

            if (arr[i] > arr[k])
            {

                temp = arr[i];
                arr[i] = arr[k];
                arr[k] = temp;
            }
        }
    }
    *a = arr[0];
    *b = arr[1];
    *c = arr[2];
}
