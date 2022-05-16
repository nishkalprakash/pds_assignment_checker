#include<stdio.h>
#include<stdlib.h>

int sum_of_digits(int n)
{
    int i,sum=0;
    while(n!=0){
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}

int number_of_digits(int n)
{
    int i,count=1;
    while(n/10!=0){
        n=n/10;
        count++;
    }
    return count;
}



void main()
{
    int n,i;
    printf("Enter how many number of rounds to play : ");
    scanf("%d",&n);

    int pr1n=0,pr2n=0;//pr means player

    int pr1b=0,pr2b=0;

    int pr1d=0,pr2d=0;

    int pr1s=0,pr2s=0;

    int count1=0,count2=0;

    for (i=0;i<n;i++)
        {
            printf("\n\n Round-%d :- \n",i+1);


            pr1n= (rand() % (1000 - 5 + 1)) + 5;
            printf("Player 1 got %d       ",pr1n);

            pr2n= (rand() % (1000 - 5 + 1)) + 5;
            printf("Player 2 got %d\n",pr2n);



            pr1d=number_of_digits(pr1n);
            pr2d=number_of_digits(pr2n);

            pr1s=sum_of_digits(pr1n);
            pr2s=sum_of_digits(pr2n);


            //game calculation starts here

            if(pr1d>pr2d){
                pr1b=1;
                pr2b=0;
                count1=count1+pr1b;
                count2=count2+pr2b;
                printf("A's badge=%d         B's badge=%d\n",pr1b,pr2b);
                printf("A's points=%d         B's points=%d\n",pr1d,pr2d);
                printf("------------A------------");
            }
            else if(pr1d<pr2d){
                pr1b=0;
                pr2b=1;
                count1=count1+pr1b;
                count2=count2+pr2b;
                printf("A's badge=%d          B's badge=%d\n",pr1b,pr2b);
                printf("A's points=%d         B's points=%d\n",pr1d,pr2d);
                                printf("------------B------------");



            }
            else if (pr1d==pr2d){
                if(pr1s>pr2s){
                    pr1b=1;
                    pr2b=0;
                    count1=count1+pr1b;
                    count2=count2+pr2b;
                        printf("A's badge=%d        B's badge=%d\n",pr1b,pr2b);
                        printf("A's points=%d         B's points=%d\n",pr1s,pr2s);
                                        printf("------------A------------");

                }
                else if(pr1s<pr2s){
                    pr1b=0;
                    pr2b=1;
                    count1=count1+pr1b;
                    count2=count2+pr2b;
                        printf("A's badge=%d        B's badge=%d\n",pr1b,pr2b);
                        printf("A's points=%d         B's points=%d\n",pr1s,pr2s);
                                        printf("------------B------------");

                      }
                else{
                    pr1b=0;
                    pr2b=0;
                    count1=count1+pr1b;
                    count2=count2+pr2b;
                        printf("A's badge=%d        B's badge=%d\n",pr1b,pr2b);
                        printf("A's points=%d         B's points=%d\n",pr1s,pr2s);


                                         printf("------------------------");

                }

            }





        }
        printf("Final result => ");
        printf("A's total score : %d |",count1);
        printf("A's total score : %d ",count2);

        if(count1>count2)
            printf("\nA wins\n");
        else
            printf("\nB wins\n");


}
