/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-4
   description:- TO PRINT SUM OF DIGIT OF A  NUMBER
*/

#include <stdio.h>
int main() {
int i=1,n, sum=0,c=0;
printf("enter your number::: ");
scanf("%d",&n);
if(n<0) {n=-n;c=1;}


 while(n>0)  {
  sum=sum +(n%10);
  n=n/10;
 }
if(c==0)
{printf("sum of digit is:  %d ",sum);}
else

{printf("sum of digit is:  %d ",-sum);}

return 0;
}
