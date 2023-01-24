/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:7
problem:2
topic:structures
*/
#include<stdio.h>
 struct Date{  // structure to store day,month,year
int day;
int month;
int year;
};
 struct Date ReadDate(struct Date x,char a){   // function to read the two dates
printf("enter the day of  date %c \n",a);
scanf("%d",&x.day);
printf("enter the month of this  date\n");
scanf("%d",&x.month);
printf("enter the year of this  date\n");
scanf("%d",&x.year);
return x;
}

void PrintDate(struct Date x,char a){      // function to print the two dates
printf("the date %c = %d/%d/%d\n",a,x.day,x.month,x.year);
}

int countfrom2000(struct Date a){     // function to compute difference of a date from 1st january 2000
int b=a.year;
int c=a.month;
int feb;
int count=0;
if(b%4==0){
feb=29;
}
else feb=28;
switch(c){
  case 12: count=count+30;
case 11: count=count+31;
case 10: count=count+30;
case 9: count=count+31;
case 8: count=count+31;
case 7: count=count+30;
case 6: count=count+31;
case 5: count=count+30;
case 4: count=count+31;
case 3: count=count+feb;
case 2: count=count+31;
case 1: count=count+a.day;
}
for(int i=0;i<b-2000;i++){
if((2000+i)%4==0){
      count=count+366;
}
else count=count+365;
}
return count;
}
// function to compute the difference between two given dates
void FindDays(struct Date x,struct Date y){
int c;
int a=countfrom2000(x);
int b=countfrom2000(y);
c=b-a;

if(c<0){ c=c*-1;}
printf("the number of days between x and y is %d\n",c);
}
// main function
int main(){
struct Date x,y;
x=ReadDate(x,'x');
y=ReadDate(y,'y');
PrintDate(x,'x');
PrintDate(y,'y');
FindDays(x,y);
return 0;
}
