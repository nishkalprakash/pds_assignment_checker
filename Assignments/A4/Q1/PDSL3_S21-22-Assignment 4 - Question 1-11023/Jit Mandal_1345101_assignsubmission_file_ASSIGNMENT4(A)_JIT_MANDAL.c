#include <stdio.h>
#include <string.h>

int main()
{
    int a[20];
    int l;
    int count = 0;
    printf("enter the value of l and then enter the values of a respectively\n");

    scanf("%d", &l);
    if (l == 2)
    {

        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j <= i; j++)
            {

                printf("(%d %d) \n", a[j], a[i]);
            }
        }
    }
    else
    for (int i = 0; i < 4; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                for (int k = 0; k <= j; k++)

                    printf(" (%d %d %d) \n", a[k], a[j], a[i]);
            }
        }
    return 0;
}
