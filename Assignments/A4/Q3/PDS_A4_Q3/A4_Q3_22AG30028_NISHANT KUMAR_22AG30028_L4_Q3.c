/* sec:- 14
   roll:- 22AG30028
   name:- NISHANT KUMAR
   assignment:-4
   description:- DISPLAY DIFFERENT DIGITS IN REVERSE IN WORDS
*/

#include <stdio.h>
int main() {
int i,n;
printf("enter your number::: ");
scanf("%d",&n);



 while(i=n)  {
 i= n%10;
 n=n/10;
 switch(i){
case 1: printf("one  "); break;
case 2: printf("two  "); break;
case 3: printf("three  "); break;
case 4: printf("four  "); break;
case 5: printf("five  "); break;
case 6: printf("six  "); break;
case 7: printf("seven  "); break;
case 8: printf("eight  "); break;
case 9: printf("nine  "); break;
case 0: printf("zero  "); break;

}
i++;
}


return 0;
}
