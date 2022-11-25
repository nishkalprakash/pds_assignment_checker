#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
 int date,month,rem;
printf("enter the date and month\n");
scanf("%d %d",&date,&month);
int day=date-1;

//jan 1 2022 was a saturday

if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
{
   if((date<=31)&&(date>=1))
      {
          
         //month  11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111 

         if(month==1)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Wednesday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
  
}
          }//MNTH1 CLOSING BRACES



  //month 3333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333

else if(month==3)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t tuesday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Wednesday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
         
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
          }
break;
  
}
      }//month end braces

//month55555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555


else if(month==5)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
          }
break;
  
}
      }//month end braces


//month 777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777

else if(month==7)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t saturday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t sunday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t monday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t thursday",date,month);
          
          }
break;
  
}
      }//month end braces

//month 888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888

else if(month==8)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
          }
break;
  
}
      }//month end braces


//month 1010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101010101101010101010101010101010

  if(month==1)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Wednesday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
  
}
          }//MNTH1 CLOSING BRACES

//month 121212121212121212121212121121121211212121212112121212121121212121212121121212121211212121212121121212121212121211212112121212112121212121212121212121212121212121

if(month==12)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t friday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t saturday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t sunday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
          }
break;
  
}
          }//MNTH1 CLOSING BRACES


  }
  
  else
   printf("invalid date 31 date month");
 
}

else if((month==4)||(month==6)||(month==9)||(month==11))
{
  if((date<=30)&&(date>=1))
{
 //month 444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
 if(month==4)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t saturday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t sunday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t monday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t thursday",date,month);
          
          }
break;
  
}
      }//month end braces

//month 66666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666

else if(month==6)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t thursday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t friday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t saturday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t sunday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t monday",date,month);
     
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t tuesday",date,month);
          
          }
break;
  
}
      }//month end braces

//999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999

if(month==9)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t friday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t saturday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t sunday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Tuesday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t wednesday",date,month);
          
          }
break;
  
}
          }//MNTH1 CLOSING BRACES

// 11 111 111 11 11 11 1 11 1 1 1 11  11111111111 1111111111111111 1111111111111111 111111111111111 11111 11 111 1111 1 11 1 1 111 1 111

else if(month==11)
          {
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t tuesday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Wednesday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
          }
break;
  
}
      }//month end braces

 
 
}
  else
  printf("invalid date 30 days month! ");
}
//2222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222
else if(month==2)
{

 if((date<=28)&&(date>=1))
           rem=day%7;
           switch(rem)
{
  case 0:
        {
          printf("input \t\t output\n %d %d \t tuesday",date,month);
          
        }
break;
  case 1 :
         {
          printf("input \t\t output\n %d %d \t Wednesday",date,month);
          
         }
break;
  case 2:
         {
          printf("input \t\t output\n %d %d \t Thursday",date,month);
          
        }
break;
  case 3:
       {
          printf("input \t\t output\n %d %d \t Friday",date,month);
          
          }
break;
case 4:
       {
          printf("input \t\t output\n %d %d \t Saturday",date,month);
          
          }
break;
case 5:
       {
          printf("input \t\t output\n %d %d \t Sunday",date,month);
          
          }
break;
case 6:
       {
          printf("input \t\t output\n %d %d \t Monday",date,month);
          
          }
break;
  
}
      }//month end braces
else
printf("invalid 28 days month\n");

return 0;
}



