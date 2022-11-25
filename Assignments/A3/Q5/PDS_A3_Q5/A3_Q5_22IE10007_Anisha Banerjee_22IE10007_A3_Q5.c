/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to find out day of a month
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int d,m;
printf("Enter day and month\n");
scanf("%d %d",&d,&m);
switch(m)
{
  case 1:
    {
      if (d>31)
      printf("Invalid date");
      else
       {
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Saturday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Sunday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Monday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Tuesday");
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Wednesday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Thursday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Friday");
        }
         break;
     }
    case 2:
      {
        if (d>28)
      printf("Invalid date");
      else
       {
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Saturday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Sunday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Monday");
         if((d==1)||(d==8)||(d==15)||(d==22))
           printf("Tuesday");
         if((d==2)||(d==9)||(d==16)||(d==23))
           printf("Wednesday");
         if((d==3)||(d==10)||(d==17)||(d==24))
           printf("Thursday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Friday");
        }
         break;
     }
   case 3:
     {
       if (d>31)
      printf("Invalid date");
      else
       {
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Friday");
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Saturday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Sunday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Monday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Tuesday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Wednesday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Thursday");
        }
         break;
     }
   case 4:
      {
        if (d>30)
      printf("Invalid date");
      else
       {
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Friday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Saturday");
         if((d==3)||(d==10)||(d==17)||(d==24))
           printf("Sunday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Monday");
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Tuesday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Wednesday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Thursday");
        }
         break;
     }
  case 5:
      {
        if (d>31)
      printf("Invalid date");
      else
       {
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Friday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Saturday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Sunday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Monday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Tuesday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Wednesday");
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Thursday");
        }
         break;
     }
        case 6:
          {
            if (d>30)
      printf("Invalid date");
      else
       {
         if((d==3)||(d==10)||(d==17)||(d==24))
           printf("Friday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Saturday");
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Sunday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Monday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Tuesday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Wednesday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Thursday");
        }
         break;
     }
       case 7:
         {
           if (d>31)
      printf("Invalid date");
      else
       {
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Friday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Saturday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Sunday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Monday");
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Tuesday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Wednesday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Thursday");
        }
         break;
     }
    case 8:
       {
         if (d>31)
      printf("Invalid date");
      else
       {
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Friday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Saturday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Sunday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Monday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Tuesday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Wednesday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Thursday");
        }
         break;
     }
       case 9:
         {
           if (d>30)
      printf("Invalid date");
      else
       {
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Monday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Tuesday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Wednesday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Thursday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Friday");
         if((d==3)||(d==10)||(d==17)||(d==24))
           printf("Saturday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Sunday");
        }
         break;
     }
         
       case 10:
       {
         if (d>31)
      printf("Invalid date");
      else
       {
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Wednesday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Thursday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Friday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Saturday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Sunday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Monday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Tuesday");
        }
         break;
     }
case 11:
         {
           if (d>30)
      printf("Invalid date");
      else
       {
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Saturday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Sunday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Monday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Tuesday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Wednesday");
         if((d==3)||(d==10)||(d==17)||(d==24))
           printf("Thursday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Friday");
        }
         break;
     }
case 12:
       {
         if (d>31)
      printf("Invalid date");
      else
       {
         if((d==5)||(d==12)||(d==19)||(d==26))
           printf("Monday");
         if((d==6)||(d==13)||(d==20)||(d==27))
           printf("Tuesday");
         if((d==7)||(d==14)||(d==21)||(d==28))
           printf("Wednesday");
         if((d==1)||(d==8)||(d==15)||(d==22)||(d==29))
           printf("Thursday");
         if((d==2)||(d==9)||(d==16)||(d==23)||(d==30))
           printf("Friday");
         if((d==3)||(d==10)||(d==17)||(d==24)||(d==31))
           printf("Saturday");
         if((d==4)||(d==11)||(d==18)||(d==25))
           printf("Sunday");
        }
         break;
     }
    default:
    {
      printf("Invalid date");
      break;
    }
}
return 0;
}

