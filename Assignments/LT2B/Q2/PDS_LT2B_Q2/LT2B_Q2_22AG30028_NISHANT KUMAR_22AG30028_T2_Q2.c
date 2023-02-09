/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment: LAB TEST 2
   description:- QUESTION NUMBER 2
*/

#include <stdio.h>
#include <stdlib.h>
 int *p;

void matrix()
 {

 int r,c,product;
printf("ENTER NUMBER OF ROW and column");
scanf("%d %d",&r,&c);



product=r*c;

p=(int*)malloc(product*sizeof(int));

if(p<=product)   scanf();


}  
void text ()
 {

	int R,C;
printf("ENTER NUMBER OF ROW");
scanf("%d",&R);

printf("ENTER NUMBER OF column");
scanf("%d",&C);


int a[R][C],i,j;

printf("enter the elements of matrix M1");

for(i=0;i<R;i++) {

   for(j=0;j<C;j++)  { 

   	 scanf("%d",& a[i][j]);


   }

}

for(i=0;i<R;i++) {

   for(j=0;j<C;j++)  { 

   	 printf("%d  ", a[i][j]);


   }
   printf("\n");




}



}
             
























int main () {

void text;


return 0;
} 



