/* NAME-ASMIT SRIVASTVA
ROLL NO-22MI31006
ASSIGNMENT-PATTERN PROBLEM
*/
#include<stdio.h>
int main()
{
int ROWS, row, col;
printf("number of rows");
int p,q;
scanf("%d" ,& ROWS);
for(row=1;row<=ROWS;++row){
if(row%2==0)                // using nested loops
{p=1;q=0;}
else
{p=0;q=1;}
for(col=1;col<=row;++col)
{
if(col%2==0)
printf("%d\n",p);
else
printf("%d\n", q);
printf("\n");
}
}

return 0;
}

