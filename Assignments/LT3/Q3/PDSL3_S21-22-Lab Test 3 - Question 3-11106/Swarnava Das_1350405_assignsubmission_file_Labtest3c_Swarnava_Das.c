// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
int main()
{
    int a=0, c, d, i, j, k, l, m,temp1,temp2,temp3,temp4,temp5;//declaring variables

    printf("enter the first number c(1,2....,9)\n");
    scanf("%d", &c);//reading the first number
    printf("enter the second number d (1,2....,9)\n");
    scanf("%d", &d);//reading the second number
    for (i = 0; i < 2; i++)// generating all the numbers in loops
    {temp1=a;
        if (i == 0)
        {
            a = a + 10000 * c;
        }
        if (i == 1)
        {
            a = a + 10000 * d;
        }

        for (j = 0; j < 2; j++)
        {temp2=a;
            if (j == 0)
            {
                a = a + 1000 * c;
            }
            if (j == 1)
            {
                a = a + 1000 * d;
            }
            for (k = 0; k < 2; k++)
            {temp3=a;
                if (k == 0)
                {
                    a = a + 100 * c;
                }
                if (k == 1)
                {
                    a = a + 100 * d;
                }
                for (l = 0; l < 2; l++)
                { temp4=a;
                    if (l == 0)
                    {
                        a = a + 10 * c;
                    }
                    if (l == 1)
                    {
                        a = a + 10 * d;
                    }
                    for (m = 0; m < 2; m++)
                    {temp5=a;
                        if (m == 0)
                        {
                            a = a + c;
                        }
                        if (m == 1)
                        {
                            a = a + d;
                        }
                        if ((a%(c+d))!=0)// checking the divisability of the generated number
                        {
                            printf("%d\n",a);// printing thr numbers
                        }
                        a=temp5;

                    }
                    a=temp4;
                }
                a=temp3;
            }
            a=temp2;
        }
        a=temp1;
    }

    return 0;
}
