/*Section: 02
  Name: Kasireddi Subha Moneesh
  Roll no.: 22CH10032
  Assignment No : 4
  Description : question 3 - "Numero-Pyramid"
*/
#include <stdio.h>

void main()
{
    int col,row,ROWS;
    printf("Enter the number of rows: ");
    scanf("%d",&ROWS);
    for (row=1;row<=ROWS;++row)
    {
        for(col=1;col<=(ROWS-row);++col)
        {
            printf(" ");
        }
        for(col=row;col<=(2*row-1);++col)
        {
            printf("%d",col%10);
        }
        for(col=(2*row-2);col>=row;--col)
        {
            printf("%d",col%10);
        }
        printf("\n");
    }
}
