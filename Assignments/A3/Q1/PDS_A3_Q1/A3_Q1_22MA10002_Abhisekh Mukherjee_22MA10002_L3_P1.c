/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 3 
DESCRIPTION: checking if the time is valid or not*/
#include<stdio.h>
#include<math.h>
int main()
{
int SS,MM,HH;
printf("enter the time as \n");
scanf("%d %d %d",&SS,&MM,&HH);
if((HH>=0) && (HH<24) && (SS<60) && (SS>=0) && (MM>=0) && (MM<60)){
printf("valid time-%d:%d:%d\n",HH,MM,SS);
}
else{
printf("invalid time\n");
}
return 0;

}

