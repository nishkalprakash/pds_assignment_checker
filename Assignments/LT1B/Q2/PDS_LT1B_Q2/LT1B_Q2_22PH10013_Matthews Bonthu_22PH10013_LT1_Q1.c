/* NAME BONTHU MATTHEWS
   ROLL NO:: 22PH10013
   LAB TEST 1
   SET B
*/


#include <stdio.h>

int main ( )
{
int i,j,n;
printf("enter number of rows");
scanf("%d",&n);

for (i=1;i<=n;i++)
   {
     for(j=1;j<=i;j++)
      {
        printf("%d",i);
      }   
   printf("\n");
   }
return 0;
}
