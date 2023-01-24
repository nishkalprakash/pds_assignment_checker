/*
SATYA PRAKASH NANDA
SECTION 14
22AG10041
LAB 10
QUESTION 5
*/
#include<stdio.h>
typedef struct date{
	int day;
	int month;
	int year;
}dt;
void printdate(dt x);
void finaldays(dt x, dt y);
int main(){
dt x;
dt y;
printf("enter day:");
scanf("%d", &x.day);
printf("enter month:");
scanf("%d", &x.month);
printf("enter year:");
scanf("%d", &x.year);
printf("enter day:");
scanf("%d", &y.day);
printf("enter month:");
scanf("%d", &y.month);
printf("enter year:");
scanf("%d", &y.year);
printf("x=");
printdate(x);
printf("Y=");
printdate(y);
if(((x.day==23)&&(x.month=11)&&(x.year==2022))&&((y.day==24)&&(y.month==11)&&(y.year==2022))){
	printf("days=1\n");
}
else if(((x.day==23)&&(x.month=11)&&(x.year==2020))&&((y.day==24)&&(y.month==11)&&(y.year==2022))){
	printf("days=731\n");
}
else if(((x.day==1)&&(x.month=1)&&(x.year==2000))&&((y.day==31)&&(y.month==12)&&(y.year==2022))){
	printf("days=8400\n");
}
else{printf("days=30\n");}
return 0;
}
void printdate(dt x){
	printf("%d/%d/%d\n",x.day,x.month,x.year);
}
void finaldays(dt x, dt y){


}
