/*
 *Section 2
 *Roll No:22IM10028
 *Name:Piyush Kumar Burnwal
 *Assignment No:04
 *Description:>Printing the Numero-Pyramid A asking height of the pyramid/number of rows from the user
              >the constituent of pyramid are only from 0to9
*/
#include <stdio.h>
int main()
{
    int r,i,j,c,sp;

    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for(i=1;i<=r;i++)//for printing the number of lines
    {
        for(sp=r-1;sp>=i;sp--)//for printing spaces in each line
        {
            printf(" ");
        }
        c=i;//c will help us in printing our values
        for(j=1;j<=(2*(i-1)+1);j++)
        {
            if (j<=i)
            {
                if (c>9)//if c has exceeded 9 in left side initialize that to 0
                {
                    c=0;
                }
                printf("%d",c);
                c++;//since in left side of pattern we need to print in increasing order
            }
            else if (j==(i+1))//checking for the element just after the middle element
            {

                c=c-2;

                if (c<0)//if that element is less than 0 just initialize c back to 0 since we need to print from 0 now.
                {
                    c=0;
                    printf("%d",c);
                }
                else{
                    printf("%d",c);
                }
            }
            else
            {
                if (c==0)
                {
                    c=9;
                    printf("%d",c);
                }

                else{
                    c=c-1;//since in right side of the pattern we need to print in decreasing order
                    printf("%d",c);
                }



            }

        }
        printf("\n");

    }
    return 0;


}
