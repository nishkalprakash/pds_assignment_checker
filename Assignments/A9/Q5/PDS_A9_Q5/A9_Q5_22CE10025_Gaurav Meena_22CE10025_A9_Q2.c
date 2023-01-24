/*Name:Gaurav meena
Roll no:22CE10025
Description:YEARS
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
	int d;
	int m;
	int y;
}date;

void readdate(date *x){
	printf("Enter date:");
	scanf("%d %d %d",&x->d,&x->m,&x->y);

}

void printdate(date x){
	printf(":%d/%d/%d\n",x.d,x.m,x.y);
}
int findDays(date a,date b){
	int monthd;
	int yeard;
	int dayd;

	int months[12]={31,28,31,30,31,30,31,30,31,30,31,30};
	yeard=365*(a.y-b.y);
	monthd=30.5*(a.m-b.m);
	dayd=(a.d-b.d);
	int leapyears=abs(a.y-b.y)/4;
	int numberofdays=abs(yeard+monthd+dayd);
	return numberofdays;

}




int main(){
	date a,b;
	readdate(&a);
	readdate(&b);

	printf("x:");
	printdate(a);

	printf("y:");
	printdate(b);



	

	int numberofdays = findDays(a,b);
	printf("days:%d\n",numberofdays);
	return 0;

}
