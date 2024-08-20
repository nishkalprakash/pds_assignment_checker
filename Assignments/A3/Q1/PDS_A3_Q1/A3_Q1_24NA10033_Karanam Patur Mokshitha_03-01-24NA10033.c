#include <stdio.h>
int main ()  {
    int day,month,year;
    (month<=12)  && (month>=1);
    (day<=31) && (day >=1);
    printf("Enter day:\n");
    scanf("%d",&day);
    printf("Enter month:\n");
    scanf("%d",&month);
    printf("Enter year:\n");
    scanf("%d",&year);
    switch(month)  {
    case 1:
    if ((day<=31)&&(day>=1))  {
    printf("Valid Date"); }
    else
    printf("Invalid Date");
    break;
    case 2:
    if (year%4==0&&(day>=1) && (day <=29)){
    printf("Valid Date");  }
    if (year%4!=0 && (day<=28)&&(day>=1)){
    printf("Valid Date");  }
    else 
    printf("Invalid Date");
    break;
    case 3:
    if((day<=31)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 4:
    if((day<=30)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 5:
    if((day<=31)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 6:
    if((day<=30)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 7:
    if((day<=31)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 8:
    if((day<=31)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 9:
    if((day<=30)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 10:
    if((day<=31)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 11:
    if((day<=30)&&(day>=1)){
    printf("Valid Date");}
    else
    printf("Invalid Date");
    break;
    case 12:
    if((day<=31)&&(day>=1)){
    printf("Valid Date");  }
    else
    printf("Invalid Date");
    break;
    default :printf("Invalid Date");
    break;
    }
    return 0;
    }
    
