/* NAME - SIDDHARTH BOADH
ROLL NUMBER- 22HS10050
ASSIGNMENT - Display of different digits in reverse in words
*/






#include<stdio.h>
int main()
{
int number;
int digits;
int count;
printf("number");
scanf("%d", &number);
while(number>0)
{
count=number%10;
switch(count){
case 0:
printf("zero ");
break;
case 1:
printf("one ");
break;
case 2:
printf("two ");
break;
case 3:
printf("three ");
break;
case 4:
printf("four ");
break;
case 5:
printf("five ");
break;
case 6:
printf("six ");
break;
case 7:
printf("seven ");
break;
case 8:
printf("eight ");
break;
case 9:
printf("nine ");
break;
}
number=number/10;
}
return 0;
}

