/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 9
Description :  to print the number of days between two dates.
*/
#include<stdio.h>
struct date{// structure
int day;
int month;
int year;
};
struct date readdate(){// to scan date
struct date a;

scanf("%d%d%d",&a.day,&a.month,&a.year);
if(a.day<0||a.day>31||a.month<1||a.month>12||a.year<2000||a.year>2022){
printf("Date not in a valid range.\n");

}
return a;
}
void printdate(struct date a){// to print date
if(a.day<10&&a.month>9){
printf("0%d/%d/%d\n",a.day,a.month,a.year);
}
if(a.month<10&&a.day>9){
printf("%d/0%d/%d\n",a.day,a.month,a.year);
}
if(a.month<10&&a.day<10){
printf("0%d/0%d/%d\n",a.day,a.month,a.year);
}
if(a.day>9&&a.month>9)
printf("%d/%d/%d\n",a.day,a.month,a.year);

}
void finddays(struct date x,struct date y){// to find number of days
struct date z;
if (x.day>y.day||x.day==y.day&&x.month>y.month){
z.day=x.day-y.day;
z.month=x.month-y.month;
z.year=x.year-y.year;
}
else if (x.day<y.day||x.day==y.day&&x.month<y.month||x.day==y.day&&x.month==y.month&&x.year<y.year){
z.day=y.day-x.day;
z.month=y.month-x.month;
z.year=y.year-x.year;
}else {
z.day=x.day-y.day;
z.month=x.month-y.month;
z.year=x.year-y.year;
}
int n,l,e;
l=z.year/4;
e=0;
int s =0;
int f = 0;
int D = y.day;
int  M; 								// Day, Month (User Defined)
M=y.month;									// Sum of days till given month 
									// Flag to check for invalid day  
	switch(M-1)	{							// Adding up all the days till `M`
		case 11: if(!s) f=D>31; s+=30;		// Note: missing `break;` 
		case 10: if(!s) f=D>30; s+=31;	
		case 9:	 if(!s) f=D>31; s+=30;
		case 8:	 if(!s) f=D>30; s+=31;
		case 7:	 if(!s) f=D>31; s+=31;
		case 6:	 if(!s) f=D>31; s+=30;		// Note: flag is updated only once
		case 5:	 if(!s) f=D>30; s+=31;
		case 4:	 if(!s) f=D>31; s+=30;
		case 3:	 if(!s) f=D>30; s+=31;
		case 2:	 if(!s) f=D>31; s+=28;
		case 1:	 if(!s) f=D>28; s+=31;
		case 0:	 if(!s) f=D>31; break;		// If M is 1 (Jan), no day is added
		default: f=1;
	}
	int j = s+D;
	//printf("%d\n",s+D);
	
D=x.day;
M=x.month;
	s=0;							// Flag to check for invalid day  
	switch(M-1)	{							// Adding up all the days till `M`
		case 11: if(!s) f=D>31; s+=30;		// Note: missing `break;` 
		case 10: if(!s) f=D>30; s+=31;	
		case 9:	 if(!s) f=D>31; s+=30;
		case 8:	 if(!s) f=D>30; s+=31;
		case 7:	 if(!s) f=D>31; s+=31;
		case 6:	 if(!s) f=D>31; s+=30;		// Note: flag is updated only once
		case 5:	 if(!s) f=D>30; s+=31;
		case 4:	 if(!s) f=D>31; s+=30;
		case 3:	 if(!s) f=D>30; s+=31;
		case 2:	 if(!s) f=D>31; s+=28;
		case 1:	 if(!s) f=D>28; s+=31;
		case 0:	 if(!s) f=D>31; break;		// If M is 1 (Jan), no day is added
		default: f=1;
	}
	int k = 365 -s -D;
	//printf("%d\n",365 -s-D);
	

if(z.month==1) e=1;
if(z.month==2) e=-1;
if(z.month==3) e=0;
if(z.month==4) e=0;
if(z.month==5) e=1;
if(z.month==6)  e=1;
if(z.month==7)  e=2;
if(z.month==8) e=3;
if(z.month==9)  e=3;
if(z.month==10)  e=4;
if(z.month==11)  e=4;
if(z.month==12)  e=5;

//n = z.year*365+z.month*30+z.day+l+e;
if(z.year>2){
n = (z.year-1)*365+j+k+l;}
else n =(z.year-1)*365+j+k+l;
if (n<0) printf("Days=%d\n",-n);
else printf("Days=%d\n",n);
}
int main(){
struct date a, b;
printf("X=");
a=readdate(a);// to read date a
printf("Y=");
b=readdate(b);// to read date b
printf("X=");
printdate(a);// to print date
printf("Y=");
printdate(b);
finddays(a,b);
}
