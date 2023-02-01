/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:11
   description:- question number 5
*/

#include <stdio.h>
#include <stdlib.h>
 

int main () {

int a[2][2], b[2][2] ,i,j;

printf("enter the elements of matrix M1");

for(i=0;i<2;i++) {

   for(j=0;j<2;j++)  { 

   	 scanf("%d",& a[i][j]);


   }

}
printf("\nyour M1\n");
for(i=0;i<2;i++) {

   for(j=0;j<2;j++)  { 

   	 printf("%d  ", a[i][j]);


   }
   printf("\n");

}
printf("enter element of M2");

for(i=0;i<2;i++) {

   for(j=0;j<2;j++)  { 

   	 scanf("%d",& b[i][j]);


   }

}


printf("\n your m2\n");



for(i=0;i<2;i++) {

   for(j=0;j<2;j++)  { 

   	 printf("%d  ",b[i][j]);


   }

printf("\n");
}


printf("the product of matrices M1 AND M2:_");






return 0;
} 




