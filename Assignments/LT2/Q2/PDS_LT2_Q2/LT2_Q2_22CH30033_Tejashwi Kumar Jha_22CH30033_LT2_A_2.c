/*
NAME : Tejashwi Kumar Jha
ROLL : 22CH30033
*/
#include<stdio.h>
#include<string.h>

struct DOB
        {
            int date;
            int month;
            int year ;
        };
struct student
        {
            char roll[10];
            char branch[2];
            int date;
            int month;
            int year ;

        };
int main()
{

    int n;
    printf("Enter the number of records to be stored.\n");
    scanf("%d",&n);

    if ( n <= 0 || n >100)
    {
        printf("Invalid Value of n.\n");
    }

    else
    {
        struct student st[n];
        printf("Enter record of %d students\n",n);

        for ( int i = 0 ; i <n ; i++)
        {
            scanf("%s",st[i].roll);
            scanf("%s",st[i].branch);
            scanf("%d",st[i].date);
            scanf("%d",st[i].month);
            scanf("%d",st[i].year);
        }


    }






}
