/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n;
    int final_A=0,final_B=0,A_badge,B_badge;
    int A, B, A_digits=0,B_digits=0,A_digitsum=0,B_digitsum=0;

    int A_final,B_final;
    printf("Enter the  number of rounds  A and B will play: ");
    scanf("%d",&n);
    for (int j = 1; j <= n; j++)
    {


        A = (rand() % (1000 - 5 + 1)) + 5;
        B = (rand() % (1000 - 5 + 1)) + 5;

        printf("ROUND %d :\n",j);
        printf("A's number : %d\t",A);
        printf("B's number : %d\n",B);

        while (A!=0)
        {
            A_digitsum+=A%10;
            A/=10;
            A_digits+=1;
        }
        while (B!=0)
        {
            B_digitsum+=B%10;
            B/=10;
            B_digits+=1;
        }



        if(A_digits>B_digits)
        {
            A_badge+=1;
            final_A+=A_digits;
            printf("A's point : %d\t",A_digits);
            printf("B's point : %d\n",B_digits);
            printf("A's badge : 1\t");
            printf("B's badge : 0\n");
            printf("\t-- A wins Round %d --\n\n",j);
        }
         if (A_digits<B_digits)
        {
            B_badge+=1;
            final_B+=B_digits;
            printf("A's point : %d\t",A_digits);
            printf("B's point : %d\n",B_digits);
            printf("A's badge : 0\t");
            printf("B's badge : 1\n");
            printf("\t-- B wins Round %d --\n\n",j);
        }
        if (A_digits==B_digits)
        {
            if (A_digitsum>B_digitsum)
            {
                final_A+=B_digitsum;
                 A_badge+=1;
                printf("A's point : %d\t",A_digitsum);
            printf("B's point : %d\n",B_digitsum);
            printf("A's badge : 1\t");
            printf("B's badge : 0\n");
            printf("\t-- A wins Round %d --\n\n",j);
            }
            else
            {
                final_B+=B_digitsum;
                 B_badge+=1;
                printf("A's point : %d\t",A_digitsum);
            printf("B's point : %d\n",B_digitsum);
            printf("A's badge : 0\t");
            printf("B's badge : 1\n");
            printf("\t-- B wins Round %d --\n\n",j);
            }

        }
    }

    A_final=final_A*A_badge;
    B_final=final_B*B_badge;
    printf("Final Result : \n");
    printf("A's total score : %d\n",A_final);
    printf("B's total score : %d\n",B_final);

    if (A_final>B_final)
    {
        printf("\t--- A wins the game ---");
    }
    else if (A_final<B_final)
    {
        printf("\t--- B wins the game ---");
    }
    else
    {
        printf("---the game is draw----");
    }

    return 0;
}
