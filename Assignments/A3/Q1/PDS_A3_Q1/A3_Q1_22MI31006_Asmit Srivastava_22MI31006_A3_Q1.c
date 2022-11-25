/*
SECTION:14
ROLL NO.:22MI31006
NAME:ASMIT SRIVASTAVA
ASSIGNMENT NO.:3
DESCRIPTION:PROGRAM TO CHECK INTEGERS ARE IN VALID TIME FORM*/

#include<stdio.h>
int main()
{
int HH,MM,SS;
printf("enter SS,MM,HH");//ENTER VALUES IN FORM OF SS,MM,HH//
scanf("%d", &SS);
scanf("%d", &MM);
scanf("%d", &HH);

if((HH<24)&&(HH>=0) && (MM<60)&&(MM>=0) &&(SS<60)&&(SS>=0)){
printf("valid time is %d:%d:%d",HH,MM,SS);
}
else {
printf("invalid time");
}
return 0;
}
