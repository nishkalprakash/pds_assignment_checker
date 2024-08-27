#include<stdio.h>
int main ()   {
    int n;
    int ROWS;
    int COLUMNs;
    int row,col;
    printf("Enter number of rows:");
    scanf("%d",&ROWS);
    for(row=1;row<=ROWS;++row)  {
        for(col=1;col<=ROWS-row;++col)  {
       printf(" ");}
       for(col=1;col<=row;++col)  {
       int i=1;
       printf("%d\n",i++&&i<n);}
       for(col=1;col>row;++col)  {
       int i=1;
       printf("%d\n",i++&&i<n);}
       }
       
      printf("\n");
    return 0;
    }
