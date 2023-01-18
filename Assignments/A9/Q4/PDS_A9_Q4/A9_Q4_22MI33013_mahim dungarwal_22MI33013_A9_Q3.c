/*
section 14
roll no : 22MI33013
name : Mahim Dungarwal
assingnment : 9
*/

#include <stdio.h>

struct wage {
	char name;
	int wageperday;
	int days;
};

int netpay(struct wage e1) {
int bp =  e1.wageperday * e1.days ; // bp = basic pay
int hra ;
int ta;
int final_pay;




if(bp<1000) {
hra == (0.12)*bp;
}
else {
hra == (0.20)*bp;
}

if(e1.days>19) {
ta == (0.10)*bp;
}
else {
ta == 0;
}

final_pay == bp + hra + ta ;
printf("final salary is %d\n",final_pay);

return final_pay;
}

int main() {
struct wage e1;

printf("enter details of employe");
scanf("%c ",&e1.name);
scanf("%d",&e1.wageperday);
scanf("%d",&e1.days);

netpay(e1);

return 0;
}



	
