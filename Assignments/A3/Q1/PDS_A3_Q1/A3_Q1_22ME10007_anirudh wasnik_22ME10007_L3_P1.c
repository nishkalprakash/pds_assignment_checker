
#include<stdio.h>
int main()
{


/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 3
Description: program that represents time of a day 
*/


int s;
int m;
int h;
printf("enter time in format: SS:MM:HH \n");     // asks the user to input time
scanf("%d %d %d",&s,&m,&h);                      

if(h==24&&m==0&&s==0)                            //as we cannot have time more than 24:0:0 hrs, we need to add this logic.
         printf("valid time is--%d:%d:%d",h,m,s);

else if(h>23||m>59||s>59)                         
         printf("Invalid Time");

else
         printf("Valid Time is-- %d:%d:%d",h,m,s);




return 0;
}
