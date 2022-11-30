/* NAME-ASMIT SRIVASTVA
ROLL NO-22MI31006
ASSIGNMENT-PRINT THE factors OF number
*/
#include<stdio.h>
int main()
{
int number,i;

printf("number");
scanf("%d" ,&number);

for(i=1;i<=number;++i){   //for positive integers
if(number%i==0){
printf("%d\n",i);
}
}
for(i=1;i>=number;++i){  //for negative integers
if(number%i==0){
printf("%d\n",i);
}
}
return 0;
} 
