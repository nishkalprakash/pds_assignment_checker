/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 3 
DESCRIPTION: electric bill*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
printf("enter your elecric units:\n");
scanf("%f",&a);
if ((a>=0)&& (a<=100)){
c=50+(50/5);
}
else if ((a>100) && (a<=200)){
b=50+ ((a-100)*0.75);
c=b+(b/5);
}
else if ((a>200) && (a<=300)){
b=50+75+((a-200)*1.20);
c=b+(b/5);
}
else if (a>300){
b=50+75+120+((a-300)*1.5);
c=b+b/5;
}
else if (a==0){
printf("your bill is zero\n");
}
else {
printf("invalid\n");
}
printf("so your bill is %f\n",c);
return 0;
}





