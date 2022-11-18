//NAME:BIMAL GAYALI
//ROLL:21MA10017
//QUESTION:3
//SEC:3

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    printf("Enter number of rounds to play the game : ");
    scanf("%d",&n);

    int p1n=0,p2n=0;
    int p1b=0,p2b=0;
    int p1d=0,p2d=0;
    int p1s=0,p2s=0;
    int count1=0,count2=0;

    for (i=0;i<n;i++)
        {
            printf("Round%d :\n",i+1);


            p1n= (rand() % (1000 - 5 + 1)) + 5;
            printf("Player 1 got %d       ",p1n);

            p2n= (rand() % (1000 - 5 + 1)) + 5;
            printf("Player 2 got %d\n",p2n);



            p1d=number_of_digits(p1n);
            p2d=number_of_digits(p2n);

            p1s=sum_of_digits(p1n);
            p2s=sum_of_digits(p2n);



                    //incomplete

        }
}
