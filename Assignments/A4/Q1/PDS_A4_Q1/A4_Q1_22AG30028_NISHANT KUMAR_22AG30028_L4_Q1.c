/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-4
   description:- PROGRAM TO DISPLAY ALL THE FACTORS OF THE NUMBER
*/

#include <stdio.h>
int main() {
int i=1,n;
printf("enter a number:-");
scanf("%d",&n);
 for(i=1;i<=n;i++)  {

 if(n%i==0)
 { printf("%d\n",i);}
}



return 0;
}
