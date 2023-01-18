/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 9
*/

#include <stdio.h>

struct  DATE{
	int date;
	int month;
	int year;
};

void readDATE(struct DATE d1 , struct DATE d2) {
printf("enter the value of date , month and year");
scanf("%d",&d1.date);
scanf("%d",&d1.month);
scanf("%d",&d1.year);

scanf("%d",&d2.date);
scanf("%d",&d2.month);
scanf("%d",&d2.year);

printf("%d//%d//%d",d1.date,d1.month,d1.year);
printf("\n");
printf("%d//%d//%d",d2.date,d2.month,d2.year);
printf("\n");
return ;
}





int main () {
struct DATE d1;
struct DATE d2;

readDATE(d1,d2);




return 0;
}
