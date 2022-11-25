#include<stdio.h>
int main()
/*
satya prakash nanda
22ag10041
ques 3
*/


{
char ch;
float a, b, c;
printf("enter a binary arithmetic operator :");
scanf("%c",&ch);
printf("enter a floating number;");
scanf("%f",&a);
printf("enter another floating number:");
scanf("%f",&b);
printf("input is %c %f %f\n", ch, a, b);

if(ch=='+'){printf("output is %f", a+b);}
else if(ch=='*'){printf("output is %f", a*b);}
else if(ch=='/'){printf("output is %f", a/b);}
else if(ch=='-'){printf("output is %f", a-b);}
else{printf("character not valid");}

return 0;
}

