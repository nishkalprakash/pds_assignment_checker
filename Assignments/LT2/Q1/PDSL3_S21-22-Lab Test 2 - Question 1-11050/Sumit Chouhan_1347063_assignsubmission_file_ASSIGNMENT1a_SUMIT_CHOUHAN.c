
#include <stdio.h>
int main()
{
    int a, i, y, j;
    printf("Enter integer any one integer from 1 to 20  "); // asking for input
    scanf("  %d", &a);
    if ((0 < a) && (a > 20))
        printf("enter integer from given range");

    else
    {
        printf("enter integer is right\n");
    }
    i = a;
    int X[i];

    for (i = 0; i < a; i++) // for scane integers
    {
        scanf("%d", &X[i]);
    }
    printf("Enter elements=%");
    for (i = 0; i < a; i++)
    {
        printf(",%d", X[i]);
    } // printing input numbers

    for (j = 0; j < a; j++)
    {
        if (X[0] > X[j])
            y = X[i];
        else
        {
            y = X[j];
        }
    }

    printf("largest=%d", y);
    return 0;
}
