/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-3
   Description-  program to input day and month then print which day it is
 */
#include<stdio.h>
int main()
{
  int day, month;
  scanf("%d %d", &day, &month);
  int a= day%7;
if(0<day<31&&0<month<12){
 if(month= 1){
 switch(a){
   case 1: printf("Saturday");
  break;
 case 2: printf("Sunday");
  break;
 case 3: printf("Monday");
  break;
 case 4: printf("Tuesday");
  break;
 case 5: printf("Wednesday");
  break;
 case 6: printf("Thursday");
  break;
  case 0: printf("Friday");
  break;
  }
} 
if(month==2){
switch(a){
   case 1: printf("Tuesday");
  break;
 case 2: printf("Wednesday");
  break;
 case 3: printf("Thursday");
  break;
 case 4: printf("Friday");
  break;
 case 5: printf("Saturday");
  break;
 case 6: printf("Sunday");
  break;
  case 0: printf("Monday");
  break;
  }
}
if(month==3){
switch(a){
   case 1: printf("Tuesday");
  break;
 case 2: printf("Wednesday");
  break;
 case 3: printf("Thursday");
  break;
 case 4: printf("Friday");
  break;
 case 5: printf("Saturday");
  break;
 case 6: printf("Sunday");
  break;
  case 0: printf("Monday");
  break;
  }
}
if(month==4){
switch(a){
   case 1: printf("Friday");
  break;
 case 2: printf("Saturday");
  break;
 case 3: printf("Sunday");
  break;
 case 4: printf("Monday");
  break;
 case 5: printf("Tuesday");
  break;
 case 6: printf("Wednesday");
  break;
  case 0: printf("Thursday");
  break;
  }
}
if(month==5){
switch(a){
   case 1: printf("Sunday");
  break;
 case 2: printf("Monday");
  break;
 case 3: printf("Tuesday");
  break;
 case 4: printf("Wednesday");
  break;
 case 5: printf("Thursday");
  break;
 case 6: printf("Friday");
  break;
  case 0: printf("Saturday");
  break;
  }
}
if(month==6){
switch(a){
   case 1: printf("Friday");
  break;
 case 2: printf("Saturday");
  break;
 case 3: printf("Sunday");
  break;
 case 4: printf("Monday");
  break;
 case 5: printf("Tuesday");
  break;
 case 6: printf("Wednesday");
  break;
  case 0: printf("Thursday");
  break;
  }
}
if(month==7){
switch(a){
   case 1: printf("Wednesday");
  break;
 case 2: printf("Thursday");
  break;
 case 3: printf("Friday");
  break;
 case 4: printf("Saturday");
  break;
 case 5: printf("Sunday");
  break;
 case 6: printf("Monday");
  break;
  case 0: printf("Tuesday");
  break;
  }
}
if(month==8){
switch(a){
   case 1: printf("Monday");
  break;
 case 2: printf("Tuesday");
  break;
 case 3: printf("Wednesday");
  break;
 case 4: printf("Thursday");
  break;
 case 5: printf("Friday");
  break;
 case 6: printf("Saturday");
  break;
  case 0: printf("Sunday");
  break;
  }
}
if(month==9){
switch(a){
   case 1: printf("Thursday");
  break;
 case 2: printf("Friday");
  break;
 case 3: printf("Saturday");
  break;
 case 4: printf("Sunday");
  break;
 case 5: printf("Monday");
  break;
 case 6: printf("Tuesday");
  break;
  case 0: printf("Wednesday");
  break;
  }
}
if(month==10){
switch(a){
   case 1: printf("Saturday");
  break;
 case 2: printf("Sunday");
  break;
 case 3: printf("Monday");
  break;
 case 4: printf("Tuesday");
  break;
 case 5: printf("Wednesday");
  break;
 case 6: printf("Thursday");
  break;
  case 0: printf("Friday");
  break;
  }
}
if(month==11){
switch(a){
  case 1: printf("Tuesday");
  break;
 case 2: printf("Wednesday");
  break;
 case 3: printf("Thursday");
  break;
 case 4: printf("Friday");
  break;
 case 5: printf("Saturday");
  break;
 case 6: printf("Sunday");
  break;
  case 0: printf("Monday");
  break;
  }
}
if(month==12){
switch(a){
    case 1: printf("Thursday");
  break;
 case 2: printf("Friday");
  break;
 case 3: printf("Saturday");
  break;
 case 4: printf("Sunday");
  break;
 case 5: printf("Monday");
  break;
 case 6: printf("Tuesday");
  break;
  case 0: printf("Wednesday");
  break;
  }
}
}
else{
 printf("Invalid date");
}
return 0;
}





