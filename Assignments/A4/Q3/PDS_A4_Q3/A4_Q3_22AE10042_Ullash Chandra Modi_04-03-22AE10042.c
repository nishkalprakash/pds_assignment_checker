/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 3
*Description- Program to print Numero-pyramid
*/
#include <stdio.h>
int main ()
{
    int a,b,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        if (i>=10)
        {b=(i%10);}
        else{b=i;}

        for (j=1;j<=(a-i+2*i-1);j++)
        {
            if (j<=(a-i))
            {printf(" ");}

            if ((j>(a-i))&&(j<=(a)))
            {printf("%d",b);
             b++;
             if(j==a)
             {b--;}
             if (b==10)
             {b=0;}
            }

            if (j>(a))
            {b--;
             if (b==(-1))
             {b=9;}
             printf("%d",b);
            }

        }
    printf("\n");
    }
    return 0;
}
