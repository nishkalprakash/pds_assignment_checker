/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 9

Description- FIND DAYS BETWEEN TWO DATES
*/
#include<stdio.h>//INCLUDING PACKAGE
struct Date//DEFINING STRUCTURE VARIABLE
{
	int day;
	int month;
	int year;
};

struct Date ReadDate()//METHOD TO READ DATE
{
	struct Date d1;
	printf("Enter date: ");
	scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
	return d1;
}

void PrintDate(struct Date x)//METHOD TO PRINT DATE
{
	printf("%d/%d/%d\n",x.day,x.month,x.year);
}

void FindDays(struct Date x,struct Date y)
{
int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};//ARRAY FOR MONTHS 
int y1=x.year;
int y2=y.year;

long int n1=x.year*365+x.day; 
if(x.month<=2)//CHECKING IF CURRENT YEAR HAS CONTRIBUTION TO LEAP YEAR
y1--;
int lyears1=(y1/4+y1/400-y1/100);//COUNTING LEAP YEARS FOR FIRST DATE
for(int i=0; i < x.month-1; i++) 
n1+= monthDays[i];//COUNTING MONTH DAYS FOR FIRST DATE
n1+=lyears1;   

long int n2=y.year*365+y.day; 
if(y.month<=2)//CHECKING IF CURRENT YEAR HAS CONTRIBUTION TO LEAP YEAR
y2--;
int lyears2=(y2/4+y2/400-y2/100);//COUNTING LEAP YEARS FOR SECOND DATE
for(int i=0; i < y.month-1; i++) 
n2+= monthDays[i]; //COUNTING MONTH DAYS FOR SECOND DATE
n2+=lyears2;
if(n2>=n1)
printf("Days= %ld\n",(n2-n1));
else
printf("Days= %ld\n",(n1-n2));
}
int main()//MAIN METHOD
{
	struct Date d1=ReadDate();
	struct Date d2=ReadDate();
	printf("X= ");PrintDate(d1);
	printf("Y= ");PrintDate(d2);
	FindDays(d1,d2);
	return 0;
}
