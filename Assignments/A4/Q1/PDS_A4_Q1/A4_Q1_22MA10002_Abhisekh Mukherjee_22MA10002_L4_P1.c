/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 1
DESCRIPTION: WRITING THE FACTORS OF A NUMBER
*/
#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
printf("enter your number:\n");
scanf("%d",&a); // input the number


printf("the factors are ");
if(a==0){
printf("0\n"); // using conditions
}
if (a>0){
for(int i=1;i<=a;i++){   // using loop
b=a%i;
if (b==0){
printf("%d\n",i);// printing the output
}
}
}
if(a<0){
a=(a*(-1));
for(int i=1;i<=a;i++){   // using loop
b=a%i;
if (b==0){
printf("%d\n",i*(-1));// printing the output
}
}
}

return 0;
}
