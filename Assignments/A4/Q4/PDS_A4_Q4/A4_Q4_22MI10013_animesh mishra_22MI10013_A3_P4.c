
/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:4
discription : number to display in pattern
*/
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter how many rows you want : ");
  scanf("%d" ,&n);


  for(i=1; i<=n; i++)
  {

     for(j=1; j<=i; j++)
        printf("%d" , j%2);

  printf("\n");

   }

     return 0;

}
