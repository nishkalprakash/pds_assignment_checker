#include<stdio.h>
int main()
{
int ROWS,row, col,i;
printf("Enter the number of rows:");
scanf("%d", &ROWS);
i=1;
for(row=0;row<ROWS;++row){
    for(col=0;col<=ROWS-1; ++col)
       printf("  ");
    for(col=1;col<=row;++col)
       i=i+1;
    for()
       printf("%d ",i);
    printf("\n");
}
  }
