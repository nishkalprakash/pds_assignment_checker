#include<stdio.h>
int main()
{
 float k,f,nm,nc;
 int da;
 printf("enter the no of meachines:\n");
 scanf("%f",&nm);
 printf("enter the day number(1_7):\n");
 scanf("%d",&da);
 printf("enter the number of meachines under inspection:\n");
 scanf("%f",&k);
 printf("enter the no of factions(0_7)\n");
 scanf("%f",&f);
 switch(da)
 {
  case'1':nc=nm;break;
  case'2':nc=nm+nm/2+nm/4;break;
  case'3':
  case'6':nc=nm-k+(nm-k)/2+(nm-k)/4;
  case'4':
  case'5':
  case'7':nc=nm+f;break;                        
 }
 printf("No of manufactyred cars is %f",nc);
 return 0;                        
}