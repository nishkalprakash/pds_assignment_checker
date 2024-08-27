#include <stdio.h>

int main(){

int d,m,y;

printf("Enter Date of birth(Date-month-year): \n");
scanf("%d%d%d",&d,&m,&y);



if((m == 1 ||m=3||m=5||m=7||m=8||m=10||m=12)&&(1<=date<=31)){


printf("Valid date \n");
}
if((m == 1 ||m=3||m=5||m=7||m=8||m=10||m=12)&&(date>31)){


printf("Valid date \n");
}



 if((m==4|| m==6||m==9||m==11||) && (1<=date<=30)){

printf("Valid date \n");

}
 if((m==4|| m==6||m==9||m==11||) && (date>30)){

printf("Invalid date \n");

}

if(month==2){

if((year%4 !=0)&&(1<=date<=28)){

printf("Valid date \n");

}

if((year%4 !=0)&&(date>28)){

printf("Invalid date \n");

}

if(year%4 ==0){


if((year%100!=0)&&(year%400!=0)&&(1<=date<=29)){



printf("valid date \n");

}
if((year%100!=0)&&(year%400!=0)&&(date>29)){



printf("Invalid date \n");

}

if((year%100==0)&&(year%400!=0)&&(1<=date<=28)){



printf("valid date \n");

}
if(year%100==0&&year%400!=0&&date>28){



printf("Invalid date \n");

}




if(year%400==0&&1<=date<=29){

printf("Valid date \n");

}

if((year%400==0))&&(date>29)){

printf("Invalid date \n");

}

}

}





else 
printf("Invalid date");







getchar();
return 0;

}
