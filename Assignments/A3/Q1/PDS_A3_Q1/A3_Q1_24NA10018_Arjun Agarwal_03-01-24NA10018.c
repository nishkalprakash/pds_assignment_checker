#include <stdio.h>

int main(){
int day,month,year;//day,month and years are integer

printf("Type any Date\n");
scanf("%d%d%d",&day,&month,&year);

if(year%4!=0){

if((month==1||month==3||month==5||month==7||month==8||month==10||month==12) &&day<=31)
printf("\nValid date\n");

else if (month==2 && day<=28)
printf("\nValid date\n");



else if((month==4||month==6||month==9||month==11) && day<=30)
printf("\nValid Date\n");

else printf("\nInvalid Date\n");
}

else if(year%4==0){

if(month==1||month==3||month==5||month==7||month==8||month==10||month==12 &&day<=31)
printf("\nValid date\n");
else printf("\nInvalid Date\n");

if(month==2 && day<=29)
printf("\nValid date\n");
else printf("\n Invalid Date\n");

if(month==4||month==6||month==9||month==11 && day<=30)
printf("\n8 Valid Date\n");
else printf("\nInvalid Date\n");
}
else printf("\nInvalid Date\n");


return 0;
}
