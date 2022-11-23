/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 3

Description - Program to predict day from dates .
*/

#include <stdio.h>

#include <math.h>
int main ()

{

int d,m;//declaring variables

printf("enter day and month \n");

scanf("%d %d", &d,&m);

switch(m)//checking month

{

case 1://for january

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Saturday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Sunday");

else if(d==3||d==10||d==17||d==24||d==31)

printf("Monday");

else if(d==4||d==11||d==18||d==25)

printf("Tuesday");

else if(d==5||d==12||d==19||d==26)

printf("Wednesday");

else if(d==6||d==13||d==20||d==27)

printf("Thursday");

else if(d==7||d==14||d==21||d==28)

printf("Friday");
else

printf("wrong input");

break;

}

case 2://for february

{

if(d==1||d==8||d==15||d==22)

printf("Tuesday");

else if(d==2||d==9||d==16||d==23)

printf("Wednesday");

else if(d==3||d==10||d==17||d==24)

printf("Thursday");

else if(d==4||d==11||d==18||d==25)

printf("Friday");

else if(d==5||d==12||d==19||d==26)

printf("Saturday");

else if(d==6||d==13||d==20||d==27)

printf("Sunday");

else if(d==7||d==14||d==21||d==28)

printf("Monday");
else

printf("wrong input");

break;

}

case 3://for march

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Tuesday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Wednesday");

else if(d==3||d==10||d==17||d==24||d==31)

printf("Thursday");

else if(d==4||d==11||d==18||d==25)

printf("Friday");

else if(d==5||d==12||d==19||d==26)

printf("Saturday");

else if(d==6||d==13||d==20||d==27)

printf("Sunday");

else if(d==7||d==14||d==21||d==28)

printf("Monday");
else

printf("wrong input");

break;

}

case 4://for april

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Friday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Saturday");

else if(d==3||d==10||d==17||d==24)

printf("Sunday");

else if(d==4||d==11||d==18||d==25)

printf("Monday");

else if(d==5||d==12||d==19||d==26)

printf("Tuesday");

else if(d==6||d==13||d==20||d==27)

printf("Wednesday");

else if(d==7||d==14||d==21||d==28)

printf("Thursday");
else

printf("wrong input");

break;

}

case 5://for may

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Sunday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Monday");

else if(d==3||d==10||d==17||d==24||d==31)

printf("Tuesday");

else if(d==4||d==11||d==18||d==25)

printf("Wednesday");

else if(d==5||d==12||d==19||d==26)

printf("Thursday");

else if(d==6||d==13||d==20||d==27)

printf("Friday");

else if(d==7||d==14||d==21||d==28)

printf("Saturday");
else

printf("wrong input");

break;

}


case 6://for june

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Wednesday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Thursday");

else if(d==3||d==10||d==17||d==24)

printf("Friday");

else if(d==4||d==11||d==18||d==25)

printf("Saturday");

else if(d==5||d==12||d==19||d==26)

printf("Sunday");

else if(d==6||d==13||d==20||d==27)

printf("Monday");

else if(d==7||d==14||d==21||d==28)

printf("Tuesday");
else

printf("wrong input");

break;

}

case 7://for july

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Friday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Saturday");

else if(d==3||d==10||d==17||d==24||d==31)

printf("Sunday");

else if(d==4||d==11||d==18||d==25)

printf("Monday");

else if(d==5||d==12||d==19||d==26)

printf("Tuesday");

else if(d==6||d==13||d==20||d==27)

printf("Wednesday");

else if(d==7||d==14||d==21||d==28)

printf("Thursday");
else

printf("wrong input");

break;

}

case 8://for august

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Monday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Tuesday");

else if(d==3||d==10||d==17||d==24||d==31)

printf("Wednesday");

else if(d==4||d==11||d==18||d==25)

printf("Thursday");

else if(d==5||d==12||d==19||d==26)

printf("Friday");

else if(d==6||d==13||d==20||d==27)

printf("Saturday");

else if(d==7||d==14||d==21||d==28)

printf("Sunday");
else

printf("wrong input");

break;

}

case 9://for september

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Thursday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Friday");

else if(d==3||d==10||d==17||d==24)

printf("Saturday");

else if(d==4||d==11||d==18||d==25)

printf("Sunday");

else if(d==5||d==12||d==19||d==26)

printf("Monday");

else if(d==6||d==13||d==20||d==27)

printf("Tuesday");

else if(d==7||d==14||d==21||d==28)

printf("Wednesday");
else

printf("wrong input");

break;

}

case 10://for october

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Saturday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Sunday");

else if(d==3||d==10||d==17||d==24||d==31)

printf("Monday");

else if(d==4||d==11||d==18||d==25)

printf("Tuesday");

else if(d==5||d==12||d==19||d==26)

printf("Wednesday");

else if(d==6||d==13||d==20||d==27)

printf("Thursday");

else if(d==7||d==14||d==21||d==28)

printf("Friday");
else

printf("wrong input");

break;

}

case 11://for november

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Tuesday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Wednesday");

else if(d==3||d==10||d==17||d==24)

printf("Thursday");

else if(d==4||d==11||d==18||d==25)

printf("Friday");

else if(d==5||d==12||d==19||d==26)

printf("Saturday");

else if(d==6||d==13||d==20||d==27)

printf("Sunday");

else if(d==7||d==14||d==21||d==28)

printf("Monday");
else

printf("wrong input");

break;

}

case 12://for december

{

if(d==1||d==8||d==15||d==22||d==29)

printf("Thursday");

else if(d==2||d==9||d==16||d==23||d==30)

printf("Friday");

else if(d==3||d==10||d==17||d==24|| d==31)

printf("Saturday");

else if(d==4||d==11||d==18||d==25)

printf("Sunday");

else if(d==5||d==12||d==19||d==26)

printf("Monday");

else if(d==6||d==13||d==20||d==27)

printf("Tuesday");

else if(d==7||d==14||d==21||d==28)

printf("Wednesday");
else

printf("wrong input");

break;

}
default:

printf("Invalide date");

}//end of switch case 
return 0;
}//end of program


