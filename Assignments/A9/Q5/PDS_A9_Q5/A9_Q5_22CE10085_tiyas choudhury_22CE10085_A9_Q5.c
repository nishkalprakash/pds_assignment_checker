#include<stdio.h>
typedef struct
{
	int DD;
	int MM;
	int YYYY:
}Date;
Date ReadDate();
void PrintDate(Date,Date);
int main()
{Date x,y;
	ReadDate(x);
	ReadDate(y);
	printf("X = ",PrintDate(x));
	printf("\n");
	printf("Y = ",PrintDate(y));
	return 0;






}

Date ReadDate(Date d)
{
	
printf("Enter day\n");
scanf("%d",&d.DD);
printf("Enter month\n");
scanf("%d",&d.MM);
printf("Enter year\n");
scanf("%d",&d.YYYY);


}
Date PrintDate(Date x)
{
	int d1,m1,y1
	d1=x.DD;
	m1=x.MM;
	y1=x.YYYY;
	printf(" %d/%d/%d\n");
}
