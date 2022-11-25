/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 3
desciption: program to tell the day 
*/


#include<stdio.h>
int main()
{
int january, jan_d, february, feb_d, march, march_d, april, april_d, may, may_d, june, jun_d, july, july_d, august, aug_d, september, sept_d, october, oct_d, november, nov_d, december, dec_d, month, day;



    {
      case 1: {month=january;
             jan_d=31;
              break;}
    }
{
      case 2:{ month=february;
             feb_d=28;
              break;}
    }
{
      case 3:{ month=march;
             march_d=31;
              break;}
    }
{
      case 4: {month=april;
             april_d=30;
              break;}
    }
{
      case 5: {month=may;
             may_d=31;
              break;}
    }
{
      case 6: {month=june;
             june_d=30;
             break;}
    }
{
      case 7: {month=july;
             july_d=31;
               break;}
    }
{
      case 8: {month=august;
             aug_d=31;
              break;}
    }
{
      case 9: {month=september;
             sept_d=30;
              break;}
    }
{
      case 10:{ month=october;
             oct_d=31;
              break;}
    }
{
      case 11: {month=november;
             nov_d=30;
              break;}
     }
{
      case 12:{ month=december;
             dec_d=31;
              break;}
    }
printf("enter month");
scanf("%d", &month);
printf("enter day");
scanf("%d", &day);
if(month>12)
 {
  printf("invalid");
 }
if(day>31)
{
  printf("invalid");
}
}






