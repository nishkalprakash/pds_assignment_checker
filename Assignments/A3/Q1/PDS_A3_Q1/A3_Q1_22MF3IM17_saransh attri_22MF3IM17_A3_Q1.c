#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
 int HH,MM,SS;
printf("hey you have to print the time\n");
printf("print the seconds first\n");
scanf("%d",&SS);
printf("print the minutes\n");
scanf("%d",&MM);
printf("print what hour of the day it is\n");
scanf("%d",&HH);

if(((SS<=60)&&(SS>=0))&&((MM<=60)&&(MM>=0))&&((HH<=24)&&(HH>=0)))
{
  printf("INPUT \t\t OUTPUT \n%d %d %d \t valid time-%d:%d:%d\n",SS,MM,HH,HH,MM,SS);
} 
else
printf("INPUT \t\t OUTPUT \n%d %d %d \t invalid time\n",SS,MM,HH);
}
