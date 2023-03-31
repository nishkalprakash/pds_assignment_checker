#include<stdio.h>

int main(){

int i, j, k, rows, r;

printf("Enter the number of rows: \n");
scanf("%d", &rows);

int t, x;


for(i=1; i<=rows; i++)
{
    for(j=1; j<=rows; j++)
    {
        if(i+j <= rows)
            printf(" ");
    }

    for(k=j; k<= rows; k++)
            {
               if(k==9)
               {
                   t = 0;;
               }
               printf("%d", t);
               t++;
               x =k;
               }
    for(x=k; x<= rows+i-1; x++)
    {
        if(t==0)
        {
            t = 9;
        }
        printf("%d", t);
        t--;
    }




printf("\n");
}

return 0;
}
