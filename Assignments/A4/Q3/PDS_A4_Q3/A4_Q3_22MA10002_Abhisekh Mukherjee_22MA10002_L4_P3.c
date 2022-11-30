/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 3
DESCRIPTION: print the number as reverse 

*/
#include<stdio.h>
#include<math.h>
int main()
{
int b,c;
long int a;
printf("enter the number:\n");
scanf("%ld",&a);
printf("the reverse is ");
if((a>=0)&&(a<=9999999999))
{
do{
b=a%10;
switch(b){
case 1: printf(" one ");
break;
case 2: printf(" two ");
break;
case 3: printf(" three ");
break;
case 4: printf(" four ");
break;
case 5: printf(" five ");
break;
case 6: printf(" six ");
break;
case 7: printf(" seven ");
break;
case 8: printf(" eight ");
break;
case 9: printf(" nine ");
break;
case 0: printf(" zero ");
break;
}
c=a/10;
a=c;
}while(c!=0);
}
else {
printf("not possible\n");
}
return 0;
}


