#include<stdio.h>
int main()
{ 
int day,month;
printf("enter day and month");
scanf("%d%d",&day,&month);
switch(month)
case '1':
{
if(day=1,8,15,22,29){printf("saturday");}
else if(day=2,9,16,23,30){printf("sunday");}
else if(day=3,10,17,24,31){printf("monday");}
else if(day=4,11,18,25){printf("tuesday");}
else if(day=5,12,19,26){printf("wednesday");}
else if(day=6,13,20,27){printf("thursday");}
else if(day=7,14,21,28){printf("friday");}
break;}
case '2':{
if(day=1,8,15,22,29){printf("tuesday");}
else if(day=2,9,16,23,){printf("wednesday");}
else if(day=3,10,17,24,){printf("thursday");}
else if(day=4,11,18,25){printf("friday");}
else if(day=5,12,19,26){printf("saturday");}
else if(day=6,13,20,27){printf("sunday");}
else if(day=7,14,21,28){printf("monday");}
break;}

return 0;
}

