//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS
 
#include<stdio.h>
int main()
{
  int n,row,col;
  printf("enter the value of n [2,10]:");
  scanf("%d",&n);
 
    for(row=1;row<=n;row++)
     {for(col=1;col<=row;col++)
       {printf("%d ",row);}
      printf("\n");
     }
    
 
return 0;
}
