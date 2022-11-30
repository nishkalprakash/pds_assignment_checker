#include <stdio.h>
int main ( )

{
 int  row,col,i;
 printf("enter the number of ROW");
 scanf("%d",&row);
  
for (i=0;i<row;i++)
   {
     for (col=0;col<=i;col++)
         {
           if (col%2==0)
              {   
                printf("1");
              }
else 
  {
    printf("0");
  }
}
printf("\n");
}
return 0;
}

