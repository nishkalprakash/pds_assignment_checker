// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
int main()
{
    int n, i, a, p, x,m,o, j, end[20][20];
    int list[20]; // declaring my integer arrey of size 20o
    for (j = 0; j < 20; j++)
    {
        for (i = 0; i < 20; i++)
        {
            end[j][i] = -1;
        }
    }

    printf("enter the number of element(s)\n");
    scanf("%d", &n);
    printf("enter %d integer(s)\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &list[i]); // taking user input of the integers
    }
    for (j = 0; j < n; j++)
    {
        for (i = j; i < n; i++)
        {
            if (i == j)
            {
                a = list[i];
                
                if (j == 0)
                {x = a;
                    end[j][i] = i;
                }

                continue;
            }

            a = a + list[i];
            if (a > x)
            {
                x = a;
                for (m = 0; m < 20;m ++)
                {
                    for ( o= 0; o < 20; o++)
                    {
                        end[m][o] = -1;
                    }
                }

                end[j][i] = i;
                continue;
            }
            if (a==x)
            {
               x = a; 
               end[j][i] = i;
            }
            
        }
    }
    printf("Largest sum = %d\n", x);
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (end[j][i] != -1)
            {
                printf("sub-arrey:");
                for (p = j; p <= i; p++)
                {
                    printf("%d  ", list[p]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
