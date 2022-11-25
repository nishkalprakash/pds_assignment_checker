/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 3 
DESCRIPTION: month and date*/
#include<stdio.h>
#include<math.h>
int main()
{
int d,m;
printf("enter the day and month of 2022\n");
scanf("%d %d",&d,&m);
switch(m){
case 1 :
   if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("saturday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("sunday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("monday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("tuesday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("wednesday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("thursday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("friday");
 else 
printf("invalid date");
   break;
case 2:
  if ((d==1)||(d==8)||(d==15)||(d==22))
   printf("tuesday");
  else  if ((d==2)||(d==9)||(d==16)||(d==23))
   printf("wednesday");
  else  if ((d==3)||(d==10)||(d==17)||(d==24))
   printf("thursday");
  else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("friday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("saturday");
 else  if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("sunday");
 else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("monday");
else 
printf("invalid date");
break;
case 3:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("tuesday");
   if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("wednesday");
   if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("thursday");
if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("friday");
if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("saturday");
if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("sunday");
if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("monday");
else 
printf("invalid date");
break;
case 4:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("friday");
   if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("saturday");
   if ((d==3)||(d==10)||(d==17)||(d==24))
   printf("sunday");
if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("monday");
if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("tuesday");
if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("wednesday");
if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("thursday");
else 
printf("invalid date");
break;
case 5 :
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("sunday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("monday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("tuesday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("wednesday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("thursday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("friday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("saturday");
 else 
printf("invalid date");
break;
case 6:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("wednesday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("thursday");
   else if ((d==3)||(d==10)||(d==17)||(d==24))
   printf("friday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("saturday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("sunday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("monday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("tuesday");
 else 
printf("invalid date");
break;
case 7:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("friday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("saturday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("sunday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("monday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("tuesday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("wednesday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("thursday");
 else 
printf("invalid date");
break;
case 8:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("monday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("tuesday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("wednesday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("thursday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("friday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("saturday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("sunday");
 else 
printf("invalid date");
break;
case 9:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("thursday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("friday");
   else if ((d==3)||(d==10)||(d==17)||(d==24))
   printf("saturday");
else if ((d=4)||(d=11)||(d=18)||(d=25))
   printf("sunday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("monday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("tuesday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("wednesday");
 else 
printf("invalid date");
break;
case 10:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("saturday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("sunday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("monday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("tuesday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("wednesday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("thursday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("friday");
 else 
printf("invalid date");
break;
case 11:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("tuesday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("wednesday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("thursday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("friday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("saturday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("sunday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("monday");
 else 
printf("invalid date");
break;
case 12:
if ((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
   printf("thursday");
   else if ((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
   printf("friday");
   else if ((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
   printf("saturday");
else if ((d==4)||(d==11)||(d==18)||(d==25))
   printf("sunday");
 else if ((d==5)||(d==12)||(d==19)||(d==26))
   printf("monday");
 else if ((d==6)||(d==13)||(d==20)||(d==27))
   printf("tuesday");
  else if ((d==7)||(d==14)||(d==21)||(d==28))
   printf("wednesday");
 else 
printf("invalid date");
break;
}
return 0;
}





