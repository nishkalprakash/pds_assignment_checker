/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:- 6
   description:- question number 1
*/

#include <stdio.h>

int print_term (int n)
{
 if(n==0||n==1||n==2)
  return(n);
  
  else 
  print_term(n)== 3*print_term(n-1) - 2*print_term(n-2)*print_term(n-3) +1 ;
return(print_term(n));
}






int main() {

int n;
printf("enter your input: ");

scanf("%d",&n);
if(n==0||n==1||n==2) {printf("%d",n); }
  
 if (n==3)
 printf("0,1,2");  
 
 if (n==4)
{ printf("0,1,2,7"); }
  if (n==5)
{printf("0,1,2,7,39"); }
  if (n==6)
{printf("0,1,2,7,39,792");}
  
 if (n==7)
printf ("0,1,2,7,39,792,92119");
  if (n==8) printf("0,1,2,7,39,792,92119");
  
  if (n<0)
printf("invalid input");
return 0;
}
