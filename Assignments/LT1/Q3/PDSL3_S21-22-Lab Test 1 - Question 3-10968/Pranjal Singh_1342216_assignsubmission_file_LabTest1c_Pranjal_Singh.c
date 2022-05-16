/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(0));
    int number_of_rounds,A_number, B_number;
    int num=(rand()%(1000-5+1))+5;
    printf("Enter the n umber of rounds\n");
    scanf("%d",&number_of_rounds);
    for(int i=1;i<=number_of_rounds;i++)
        {
            printf("Enter A's number");
        scanf("%d",&A_number);
        printf("Enter B's number");
        scanf("%d",&B_number);
        printf("Round-i-->");
        printf("A's number:=%d\t",A_number);
        printf("B's number:=%d\t",B_number);

        }


        if(A_number>B_number)
            {printf("A's badge=i++\n");
            printf("--A wins round i--\n");
            }
            if (B_number>A_number)

            {printf("B's badge=i++\n");
            printf("--B wins round i--\n");
            }
            else

                    printf("A is the winner");
                    return 0;
        }












