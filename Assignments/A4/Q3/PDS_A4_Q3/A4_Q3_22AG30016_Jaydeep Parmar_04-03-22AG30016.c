#include<stdio.h> //i tried very hard to use number but i was able to get stars in place of number
int main()
{
    int n,a,i=1;
    int row,col;
    int ROWS,COLS;
    scanf("%d",&n);
    ROWS=n;
    COLS=((2*n)-1);
    for (row=1; row<=ROWS; ++row)
    {
         a=1;
        while(a<=(ROWS-row))
        {
            printf(" ");
            a++;
        }
        for (col=ROWS-row; col<=ROWS+row-2; ++col)
        {

            printf("*");

        }
        printf("\n");
    }
 return 0;
}


