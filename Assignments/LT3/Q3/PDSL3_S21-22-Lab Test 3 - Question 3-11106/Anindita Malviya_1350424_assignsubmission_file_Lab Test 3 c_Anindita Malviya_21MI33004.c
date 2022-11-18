/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 3
*/
#include<stdio.h>
int main()
{

    int n;           //new no.
    int N[2];                     //digits of the new no.
    printf("Enter two digits: ");
    scanf("%d %d",&N[0],&N[1]);
    int a,b,c,d,e;
    for ( a = 0; a < 2; a++)
    {
        for ( b = 0; b < 2; b++)
        {
           for ( c = 0; c < 2; c++)
           {
               for ( d = 0; d < 2; d++)
               {
                   for ( e = 0; e < 2; e++)
                   {
                       n = N[a]*10000 + N[b]*1000 + N[c]*100 + N[d]*10 + N[e];              //forming the new no.
                       int divisible = n%(N[0] + N[1]);

                           if (divisible != 0)                                             //checking divisiblity condn.
                            {
                                    printf("%d\n",n);                                     //printing the no.s
                            }
                   }
               }
           }
        }
    }


}
