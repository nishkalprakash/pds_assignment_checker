#include<stdio.h>
#include<math.h>

int main()
{
  int day,month;
  printf("enter the day");
  scanf("%d",&day);
  printf("enter the month");
  scanf("%d",&month);
   int td;
   if(day>31){
   printf("invalid date");
   return 0;
   }
  else if (month==1){td=day;}
  else if(month==2){ td=day+31;}
  else if(month==3){td==day+59;}
  else if(month==4){td=day+90;}
  else if(month==5){td=day+120;}
  else if(month==6){td=day+151;}
  else if(month==7){td=day+181;}
  else if(month==8){td=day+212;}
  else if(month==9){td=day+243;}
  else if(month==10){td=day+273;}
  else if(month==11){td=day+304;}
  else if(month==12){td=day+334;}
  else if(month>12){printf("invalid date");}
  
   switch(td){
   case (1):
   printf("saturday");
   break;
   case (2):
   printf("sunday");
   break;
   case (3):
   printf("monday");
   break;
   case (4):
   printf("tuesday");
   break;
   case (5):
   printf("wednesday");
   break;
   case (6):
   printf("thursday");
   break;
   case (7):
   printf("friday");
   break;
   default:
   printf(" ");}
    switch(td%7){
    case (1):
   printf("saturday");
   break;
   case (2):
   printf("sunday");
   break;
   case (3):
   printf("monday");
   break;
   case (4):
   printf("tuesday");
   break;
   case (5):
   printf("wednesday");
   break;
   case (6):
   printf("thursday");
   break;
   case (7):
   printf("friday");
   break;
   default:
   printf("sunday");}
    
  
}
