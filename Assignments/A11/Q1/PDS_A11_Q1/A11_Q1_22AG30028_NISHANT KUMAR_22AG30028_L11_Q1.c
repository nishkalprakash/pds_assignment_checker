/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:11
   description:- question number 1
*/

#include <stdio.h>
#include <stdlib.h>



 float sum(int n)  {   

   
if(n==0)  return 0;


else  return (1.0/n + sum(n-1) ); 


                    }


int main(){

float a;
int n;
printf("enter the value of n: ");
scanf("%d",&n);

a=sum(n);

printf("the sum is %f",a);

return 0;
} 




