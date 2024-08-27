#include <stdio.h>
int main()
{
 int n,row,col,i,j;
 printf("Enter the number of rows :");
 scanf("%d",&n);//input from user
 row=n;
 for (i=1,i<row+1;i++)
     printf("-"*(n-1),"%d",i);
     

 
return 0;
}
    
 
