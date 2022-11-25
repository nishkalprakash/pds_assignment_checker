#include<stdio.h>

int main(){
int day,month;
printf("enter day and month: ");
scanf("%d%d",&day,&month);
if (month ==1||7){
if (day==1||8||15||22||29)printf("saturday");
else if (day==2||9||16||23||30)printf("sunday");
else if (day==3||10||17||24||31)printf("monday");
else if (day==4||11||18||25)printf("tuesday");
else if (day==5||12||19||26)printf("wednesday");
else if (day==6||13||20||27)printf("thursday");
else if (day==7||14||21||28)printf("friday");}

if (month ==2){
if (day==1||8||15||22||29)printf("tuesday");
else if (day==2||9||16||23)printf("wednesday");
else if (day==3||10||17||24)printf("thursday");
else if (day==4||11||18||25)printf("friday");
else if (day==5||12||19||26)printf("saturday");
else if (day==6||13||20||27)printf("sunday");
else if (day==7||14||21||28)printf("monday");}

if (month==3){

if (day==1||8||15||22||29)printf("wednesday");
else if (day==2||9||16||23||30)printf("thursday");
else if (day==3||10||17||24||31)printf("friday");
else if (day==4||11||18||25)printf("saturday");
else if (day==5||12||19||26)printf("sunday");
else if (day==6||13||20||27)printf("monday");
else if (day==7||14||21||28)printf("tuesday");}

if (month==4){


if (day==1||8||15||22||29)printf("saturday");
else if (day==2||9||16||23||30)printf("sunday");
else if (day==3||10||17||24)printf("monday");
else if (day==4||11||18||25)printf("tuesday");
else if (day==5||12||19||26)printf("wednesday");
else if (day==6||13||20||27)printf("thursday");
else if (day==7||14||21||28)printf("friday");}



if(month==5){


if (day==1||8||15||22||29)printf("monday");
else if (day==2||9||16||23||30)printf("tuesday");
else if (day==3||10||17||24||31)printf("wednesday");
else if (day==4||11||18||25)printf("thursday");
else if (day==5||12||19||26)printf("friday");
else if (day==6||13||20||27)printf("saturday");
else if (day==7||14||21||28)printf("sunday");}



if (month==6){

if (day==1||8||15||22||29)printf("tuesday");
else if (day==2||9||16||23||30)printf("wednesday");
else if (day==3||10||17||24)printf("thursday");
else if (day==4||11||18||25)printf("friday");
else if (day==5||12||19||26)printf("saturday");
else if (day==6||13||20||27)printf("sunday");
else if (day==7||14||21||28)printf("monday");}



if(month==8){



if (day==1||8||15||22||29)printf("tuesday");
else if (day==2||9||16||23||30)printf("wednesday");
else if (day==3||10||17||24||31)printf("thursday");
else if (day==4||11||18||25)printf("friday");
else if (day==5||12||19||26)printf("saturday");
else if (day==6||13||20||27)printf("sunday");
else if (day==7||14||21||28)printf("monday");}



if(month==9){


if (day==1||8||15||22||29)printf("friday");
else if (day==2||9||16||23||30)printf("saturday");
else if (day==3||10||17||24)printf("sunday");
else if (day==4||11||18||25)printf("monday");
else if (day==5||12||19||26)printf("tuesday");
else if (day==6||13||20||27)printf("wednesday");
else if (day==7||14||21||28)printf("thursday");}


if(month==10){


if (day==1||8||15||22||29)printf("sunday");
else if (day==2||9||16||23||30)printf("monday");
else if (day==3||10||17||24||31)printf("tuesday");
else if (day==4||11||18||25)printf("wednesday");
else if (day==5||12||19||26)printf("thursday");
else if (day==6||13||20||27)printf("friday");
else if (day==7||14||21||28)printf("saturday");}

if (month==11){


if (day==1||8||15||22||29)printf("wednesday");
else if (day==2||9||16||23||30)printf("thursday");
else if (day==3||10||17||24)printf("friday");
else if (day==4||11||18||25)printf("saturday");
else if (day==5||12||19||26)printf("sunday");
else if (day==6||13||20||27)printf("monday");
else if (day==7||14||21||28)printf("tuesday");}


if (month==12){



if (day==1||8||15||22||29)printf("friday");
else if (day==2||9||16||23||30)printf("saturday");
else if (day==3||10||17||24||31)printf("sunday");
else if (day==4||11||18||25)printf("monday");
else if (day==5||12||19||26)printf("tuesday");
else if (day==6||13||20||27)printf("wednesday");
else if (day==7||14||21||28)printf("thursday");}

if(day>31||month>12)printf("invalid date");

return 0;
}








