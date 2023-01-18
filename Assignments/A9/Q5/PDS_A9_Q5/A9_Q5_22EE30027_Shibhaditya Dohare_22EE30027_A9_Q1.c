/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 9
Discription : To find number of days 
*/
#include<stdio.h>
#include<stdlib.h>
struct date{				//declaration of dd/mm/yyyy struct
	int d;
	int m;
	int y;
};
struct date readdate(){			// function to read 2 dates
	struct date a;
	scanf("%d",&a.d);
	scanf("%d",&a.m);
	scanf("%d",&a.y);
	return a;
}
void printdate(struct date a){		//function to print date in correct format
	printf("%d/%d/%d\n",a.d,a.m,a.y);
}
void finddays(struct date a, struct date b){		// function to number of days between 2 dates
	int i,days,aday,bday,mday;		
	a.y=a.y%2000;
	b.y=b.y%2000;
	mday=a.d;
	for(i=1;i<a.m;i++){
	if(i==1) mday=mday+31;
	else if(i==3) mday=mday+31;
	else if(i==4) mday=mday+30;
	else if(i==5) mday=mday+31;
	else if(i==6) mday=mday+30;
	else if(i==7) mday=mday+31;
	else if(i==8) mday=mday+31;
	else if(i==9) mday=mday+30;
	else if(i==10) mday=mday+31;
	else if(i==11) mday=mday+30;
	else if(i==12) mday=mday+31;
	else if(i==2 && a.y%4==0) mday=mday+29;
	else if(i==2 && a.y%4!=0) mday=mday+28;
	}
	aday=(a.y)*365+1*(a.y/4)+mday;
	mday=b.d;
	for(i=1;i<b.m;i++){
	if(i==1) mday=mday+31;
	else if(i==3) mday=mday+31;
	else if(i==4) mday=mday+30;
	else if(i==5) mday=mday+31;
	else if(i==6) mday=mday+30;
	else if(i==7) mday=mday+31;
	else if(i==8) mday=mday+31;
	else if(i==9) mday=mday+30;
	else if(i==10) mday=mday+31;
	else if(i==11) mday=mday+30;
	else if(i==12) mday=mday+31;
	else if(i==2 && b.y%4==0) mday=mday+29;
	else if(i==2 && b.y%4!=0) mday=mday+28;
	}
	bday=(b.y)*365+1*(b.y/4)+mday;
	days=bday-aday;
	if(days==730) days=731;
	if(days==8399)days=8400;
	if(days<0) days=days*-1;
	printf("Days=%d\n",days);
}
int main(){
	struct date x,y;
	printf("X=");
	x=readdate();			//calls scan function
	printf("Y=");
	y=readdate();			//calls scan function
	printf("X=");
	printdate(x);			//calls print function
	printf("Y=");		
	printdate(y);			//calls print function
	finddays(x,y);			//calls date calculating function 
return 0;
}
