#include<stdio.h>
#include<math.h>
 

int main ()
 
{
  int p;
 printf("Enter the number of rows between 2 to 10");
 scanf("%d",&p);
int row ,col;

 for (row=1;row<=p;++row)
{

 for (col=1;col<=row;++col)
{

 if(col%2==0)
 printf("0");
 else 
 printf("1");
}

printf("\n");
}
return 0;
}
 

