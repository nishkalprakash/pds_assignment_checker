//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// assignment:4
//description:
#include<stdio.h>
int main()//start of the program
{
    int row,r,column,count=1;
    printf("enter the number of rows:");
    scanf("%d",&r);
    for (row=1;row<=r;row++)
    {
        for(column=1;column<=r-row;column++)
        {
           printf(" ");
        }
        for(column=1;column<=row;column++)
        {
           if (count>=10)
           {
               count=count-10;
           }
           printf("%d",count);
           if (count>2*row-1)
           {
               count=row-1;
           }
           count++;
        }
        printf("\n");




}
}
