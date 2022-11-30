/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 4
DESCRIPTION: pattern based on integer input
*/
#include<stdio.h>
#include<math.h>
int main()
{
int R,b,a; // declaring the intergers 
printf("enter the limit \n");
scanf("%d",&R);  // input the limit
if ((R<=10)&&(R>=2)){              // using if else so that only the values within the limit should be taken
printf("the pattern is\n");
for (a=1;a<=R;a++){
for (b=1;b<=a;b++){  // using nested loops by for loop
if(b%2==0){
printf("0");
}
else{
printf("1");
}
}
printf("\n");
}
}
else {
printf("enter the input which is in between the limit\n"); // printing the output pattern
}
return 0;
}

