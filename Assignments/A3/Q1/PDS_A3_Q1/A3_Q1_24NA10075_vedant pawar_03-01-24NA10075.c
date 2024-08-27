#include<stdio.h>
int main()
{int DD,MM,YYYY;
 
 printf("the day of the month :");
 scanf("%d",&DD);
 
 printf("the month of the year:");
 scanf("%d",&MM);
 
 printf("the year:");
 scanf("%d",&YYYY);
  if (MM!=2 && MM%2==0 &&  DD>0 && DD<31 ){printf("Valid date");}
  else if (MM!=2 && MM%2!=0 && DD >0 && DD<32){printf("Valid date");}
  
  else if(MM==2 && YYYY%4!=0 && 0<DD<29){printf("Valid date");}                      
  
  else if ( MM==2 && YYYY%4==0 && 0<DD<30  )
  {printf("Valid date");}
   
 else { printf("Invalid date");}
 return 0;}
