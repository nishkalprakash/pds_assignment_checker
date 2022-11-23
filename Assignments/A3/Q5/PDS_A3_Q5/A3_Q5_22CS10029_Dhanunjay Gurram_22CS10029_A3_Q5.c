/*Section 14
  Roll no:22CS10029
  Name:Gurram Dhanunjay
  Assignment no:3
  Description:Program to check points*/
/* Program to check the day by taking date as input*/ 
#include <stdio.h>
int main()
{
   int day,month;
   printf("Enter day and month:");
   scanf("%d %d",&day,&month);
   if (month==1||month==10) {
     if (day==1||day==8||day==15||day==22||day==29) printf("Saturday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Sunday");
     else if (day==3||day==10||day==17||day==24||day==31) printf("Monday");
     else if (day==4||day==11||day==18||day==25) printf("Tuesday");
     else if (day==5||day==12||day==19||day==26) printf("Wednesday");
     else if (day==6||day==13||day==20||day==27) printf("Thursday");
     else if (day==7||day==14||day==21||day==28) printf("Friday");
     else printf("Invalid date");
     }
   else if (month==2) {
      if (day==1||day==8||day==15||day==22) printf("Tuesday");
     else if (day==2||day==9||day==16||day==23) printf("Wednesday");
     else if (day==3||day==10||day==17||day==24) printf("Thursday");
     else if (day==4||day==11||day==18||day==25) printf("Friday");
     else if (day==5||day==12||day==19||day==26) printf("Saturday");
     else if (day==6||day==13||day==20||day==27) printf("Sunday");
     else if (day==7||day==14||day==21||day==28) printf("Monday");
     else printf("Invalid date");
      }
   else if (month==3) {
      if (day==1||day==8||day==15||day==22||day==29) printf("Tuesday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Wednesday");
     else if (day==3||day==10||day==17||day==24||day==31) printf("Thursday");
     else if (day==4||day==11||day==18||day==25) printf("Friday");
     else if (day==5||day==12||day==19||day==26) printf("Saturday");
     else if (day==6||day==13||day==20||day==27) printf("Sunday");
     else if (day==7||day==14||day==21||day==28) printf("Monday");
     else printf("Invalid date");
       }
    else if (month==4) {
      if (day==1||day==8||day==15||day==22||day==29) printf("Friday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Saturday");
     else if (day==3||day==10||day==17||day==24) printf("Sunday");
     else if (day==4||day==11||day==18||day==25) printf("Monday");
     else if (day==5||day==12||day==19||day==26) printf("Tuesday");
     else if (day==6||day==13||day==20||day==27) printf("Wednesday");
     else if (day==7||day==14||day==21||day==28) printf("Thursday");
     else printf("Invalid date");
       }
    else if (month==5) {
      if (day==1||day==8||day==15||day==22||day==29) printf("Sunday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Monday");
     else if (day==3||day==10||day==17||day==24||day==31) printf("Tuesday");
     else if (day==4||day==11||day==18||day==25) printf("Wedesday");
     else if (day==5||day==12||day==19||day==26) printf("Thursday");
     else if (day==6||day==13||day==20||day==27) printf("Friday");
     else if (day==7||day==14||day==21||day==28) printf("Saturday");
     else printf("Invalid date");
       }
    else if (month==6) {
      if (day==1||day==8||day==15||day==22||day==29) printf("Wednesday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Thursday");
     else if (day==3||day==10||day==17||day==24) printf("Friday");
     else if (day==4||day==11||day==18||day==25) printf("Saturday");
     else if (day==5||day==12||day==19||day==26) printf("Sunday");
     else if (day==6||day==13||day==20||day==27) printf("Monday");
     else if (day==7||day==14||day==21||day==28) printf("Tuesday");
     else printf("Invalid date");
       }
    else if (month==7) {
     if (day==1||day==8||day==15||day==22||day==29) printf("Friday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Saturday");
     else if (day==3||day==10||day==17||day==24||day==31) printf("Sunday");
     else if (day==4||day==11||day==18||day==25) printf("Monday");
     else if (day==5||day==12||day==19||day==26) printf("Tuesday");
     else if (day==6||day==13||day==20||day==27) printf("Wednesday");
     else if (day==7||day==14||day==21||day==28) printf("Thursday"); 
     else printf("Invalid date");
       }
    else if (month==8) {
     if (day==1||day==8||day==15||day==22||day==29) printf("Monday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Tuesday");
     else if (day==3||day==10||day==17||day==24||day==31) printf("Wednesday");
     else if (day==4||day==11||day==18||day==25) printf("Thursday");
     else if (day==5||day==12||day==19||day==26) printf("Friday");
     else if (day==6||day==13||day==20||day==27) printf("Saturday");
     else if (day==7||day==14||day==21||day==28) printf("Sunday");
     else printf("Invalid date");
       }
    else if (month==9) {
     if (day==1||day==8||day==15||day==22||day==29) printf("Thursday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Friday");
     else if (day==3||day==10||day==17||day==24) printf("Saturday");
     else if (day==4||day==11||day==18||day==25) printf("Sunday");
     else if (day==5||day==12||day==19||day==26) printf("Monday");
     else if (day==6||day==13||day==20||day==27) printf("Tuesday");
     else if (day==7||day==14||day==21||day==28) printf("Wednesday");
     else printf("Invalid date");
       }
     else if (month==11) {
       if (day==1||day==8||day==15||day==22||day==29) printf("Tuesday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Wednesday");
     else if (day==3||day==10||day==17||day==24) printf("Thursday");
     else if (day==4||day==11||day==18||day==25) printf("Friday");
     else if (day==5||day==12||day==19||day==26) printf("Saturday");
     else if (day==6||day==13||day==20||day==27) printf("Sunday");
     else if (day==7||day==14||day==21||day==28) printf("Monday");
     else printf("Invalid date");
       }
     else if (month==12) {
       if (day==1||day==8||day==15||day==22||day==29) printf("Thursday");
     else if (day==2||day==9||day==16||day==23||day==30) printf("Friday");
     else if (day==3||day==10||day==17||day==24||day==31) printf("Saturday");
     else if (day==4||day==11||day==18||day==25) printf("Sunday");
     else if (day==5||day==12||day==19||day==26) printf("Monday");
     else if (day==6||day==13||day==20||day==27) printf("Tuesday");
     else if (day==7||day==14||day==21||day==28) printf("Wednesday");
     else printf("Invalid date");
      }
     else printf("Invalid date"); 
     return 0;
 }
