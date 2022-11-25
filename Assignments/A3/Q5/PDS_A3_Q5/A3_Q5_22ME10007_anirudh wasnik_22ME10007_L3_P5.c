
#include<stdio.h>
int main()
{


/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 3
Description: 2022 calender
*/


int d,m;
int s;
printf("enter day and month:");
scanf("%d %d",&d,&m);

if(d>30&&(m==4||m==6||m==9||m==11))
         printf("invalid date");

if(d>31)
         printf("invalid date");

if(m>12)
         printf("invalid date");

if(d>28&&m==2)
         printf("invalid date");
if(m==1){
         if(d%7==1)
                  printf("saturday");

         if(d%7==2)
                  printf("sunday");

         if(d%7==3)
                  printf("monday");

         if(d%7==4)
                  printf("tuesday");

         if(d%7==5)
                  printf("wednesday");

         if(d%7==6)
                  printf("thursday");

         if(d%7==0)
                  printf("friday");
}
if(m==2){
         if(d%7==1)
                  printf("tuesday");
         
         if(d%7==2)
                  printf("wednesday");
         
         if(d%7==3)
                  printf("thursday");
         
         if(d%7==4)
                  printf("friday");
         
         if(d%7==5)
                  printf("saturday");

         if(d%7==6)
                  printf("sunday");

         if(d%7==0)
                  printf("monday");

   
}


if(m==3){
         if(d%7==1)
                  printf("tuesday");
         
         if(d%7==2)
                  printf("wednesday");
         
         if(d%7==3)
                  printf("thursday");
         
         if(d%7==4)
                  printf("friday");
         
         if(d%7==5)
                  printf("saturday");

         if(d%7==6)
                  printf("sunday");

         if(d%7==0)
                  printf("monday");


}
   



if(m==4){
         if(d%7==1)
                  printf("FRIDAY");
         
         if(d%7==2)
                  printf("saturday");
         
         if(d%7==3)
                  printf("sunday");
         
         if(d%7==4)
                  printf("monday");
         
         if(d%7==5)
                  printf("tuesday");

         if(d%7==6)
                  printf("wednesday");

         if(d%7==0)
                  printf("thursday");


}


if(m==5){
         if(d%7==1)
                  printf("sunday");
         
         if(d%7==2)
                  printf("monday");
         
         if(d%7==3)
                  printf("tuesday");
         
         if(d%7==4)
                  printf("wednesday");
         
         if(d%7==5)
                  printf("thursday");

         if(d%7==6)
                  printf("friday");

         if(d%7==0)
                  printf("saturday");


}



if(m==6){
         if(d%7==1)
                  printf("wednesDAY");
         
         if(d%7==2)
                  printf("thursday");
         
         if(d%7==3)
                  printf("friday");
         
         if(d%7==4)
                  printf("saturday");
         
         if(d%7==5)
                  printf("sunday");

         if(d%7==6)
                  printf("monday");

         if(d%7==0)
                  printf("tuesday");


}




if(m==7){
         if(d%7==1)
                  printf("FRIDAY");
         
         if(d%7==2)
                  printf("saturday");
         
         if(d%7==3)
                  printf("sunday");
         
         if(d%7==4)
                  printf("monday");
         
         if(d%7==5)
                  printf("tuesday");

         if(d%7==6)
                  printf("wednesday");

         if(d%7==0)
                  printf("thursday");


}




if(m==8){
         if(d%7==1)
                  printf("monday");
         
         if(d%7==2)
                  printf("tuesday");
         
         if(d%7==3)
                  printf("wednesday");
         
         if(d%7==4)
                  printf("thursday");
         
         if(d%7==5)
                  printf("friday");

         if(d%7==6)
                  printf("saturday");

         if(d%7==0)
                  printf("sunday");


}



if(m==9){
         if(d%7==1)
                  printf("thurday");
         
         if(d%7==2)
                  printf("friday");
         
         if(d%7==3)
                  printf("saturday");
         
         if(d%7==4)
                  printf("sunday");
         
         if(d%7==5)
                  printf("monday");

         if(d%7==6)
                  printf("tuesday");

         if(d%7==0)
                  printf("wednesday");


}

if(m==10){
         if(d%7==1)
                  printf("saturday");

         if(d%7==2)
                  printf("sunday");

         if(d%7==3)
                  printf("monday");

         if(d%7==4)
                  printf("tuesday");

         if(d%7==5)
                  printf("wednesday");

         if(d%7==6)
                  printf("thursday");

         if(d%7==0)
                  printf("friday");
}





if(m==11){
         if(d%7==1)
                  printf("tuesday");
         
         if(d%7==2)
                  printf("wednesdayd");
         
         if(d%7==3)
                  printf("thurday");
         
         if(d%7==4)
                  printf("fridayy");
         
         if(d%7==5)
                  printf("saturday");

         if(d%7==6)
                  printf("sunday");

         if(d%7==0)
                  printf("monday");


}




if(m==12){
         if(d%7==1)
                  printf("thurday");
         
         if(d%7==2)
                  printf("friday");
         
         if(d%7==3)
                  printf("saturday");
         
         if(d%7==4)
                  printf("sunday");
         
         if(d%7==5)
                  printf("monday");

         if(d%7==6)
                  printf("tuesday");

         if(d%7==0)
                  printf("wednesday");


}



























return 0;
}
