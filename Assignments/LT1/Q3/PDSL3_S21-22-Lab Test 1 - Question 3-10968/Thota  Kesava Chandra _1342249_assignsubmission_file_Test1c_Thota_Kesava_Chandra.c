/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int digit(int num)
{
    int ndigit =0;
    int rem =1;
    int order = 10;
    do
    {
        rem = num/(order);
        ndigit += 1;
        order *= 10;
    }while(rem>0);
    return ndigit;
}

int s_digit(int num)
{
    int order = 10,sum=0,test,temp;
    do
    {
        test = num/order;
        temp = (num%order)/(order/10);
        order *= 10;
        sum += temp;
    }while(test>0);
    return sum;
}


int main()
{
    srand(time(0));
    int a,b,nround,a_win=0,b_win=0,a_point,b_point,a_score=0,b_score=0;
    printf("Number of rounds: ");
    scanf("%d",&nround);
    printf("\n\n");
    for (int i=1;i<=nround;i++)
    {
        printf("Round %d\n",i);
        a = (rand() % (1000 - 5 + 1)) + 5;
        b = (rand() % (1000 - 5 + 1)) + 5;
        a_point = digit(a);
        b_point = digit(b);
        printf("A's number = %d   B's number = %d\n",a,b);

        if (a_point > b_point )
        {
            printf("A's point = %d     B's point = %d\n",a_point,b_point);
            printf("A's badge = 1     B's badge = 0\n");
            a_win +=1;
            printf("---- A wins Round %d ----\n\n",i);
            a_score += a_point;
            b_score += b_point;
        }
        else if(b_point > a_point)
        {
            printf("A's point = %d     B's point = %d\n",a_point,b_point);
            printf("A's badge = 0     B's badge = 1\n");
            b_win +=1;
            printf("---- B wins Round %d ----\n\n",i);
            a_score += a_point;
            b_score += b_point;
        }
        else
        {
            a_point = s_digit(a);
            b_point = s_digit(b);
            if (a_point > b_point )
            {
                printf("A's point = %d     B's point = %d\n",a_point,b_point);
                printf("A's badge = 1     B's badge = 0\n");
                printf("---- A wins Round %d ----\n\n",i);
                a_win +=1;
                a_score += a_point;
                b_score += b_point;
            }
            else
            {
                printf("A's point = %d     B's point = %d\n",a_point,b_point);
                printf("A's badge = 0     B's badge = 1\n");
                b_win +=1;
                printf("---- B wins Round %d ----\n\n",i);
                a_score += a_point;
                b_score += b_point;
            }
        }
    }

    a_score *= a_win;
    b_score *= b_win;
    printf("Final Result\n");
    printf("A's score = %d    B's score = %d\n",a_score,b_score);
    if (a_score>b_score)
    {
        printf("---- A wins game ----\n");
    }
    else if (b_score>a_score)
    {
        printf("---- B wins game ----\n");
    }
    else
    {
        printf("Tie Game\n");
    }
    return 0;
}
