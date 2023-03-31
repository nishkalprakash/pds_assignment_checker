/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 3
* Description : Program to print Numero Pyramid
*/
#include <stdio.h>
int main()
{
    char a =' ';
    int row, count=0;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for(int i=1; i<=row; i++)
    {
        count=i;
        for(int j=1;j<row-i+1;j++)
        {
        printf("%c", a);
        }
        for(int k=0;k<i;k++)
        {
        printf("%d", count%10);
        ++count;
        }
        count-=2;
        for(int l=0; l<i-1; l++)
        {
        printf("%d", count%10);
        --count;
        }
        printf("\n");

    }
}
