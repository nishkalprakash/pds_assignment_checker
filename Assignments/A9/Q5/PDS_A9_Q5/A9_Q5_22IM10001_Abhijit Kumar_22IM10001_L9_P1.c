/*Name : Abhijit Kumar
SECTION 14
ROLL NO. 22IM10001
QUESTION 1
TOPIC:-Finding number of days between two dates.*/
#include<stdio.h>
#include<stdlib.h>
struct date
{
	int D;
	int Y;
	int M;
};
void PrintDate(struct date *d)
{
printf("\n Date = %d/%d/%d",d->D,d->M,d->Y);
}
void FindDays (struct date *d1, struct date *d2)
{
	int days;
	days=(d2->Y-d1->Y)*365+(((d2->M-d1->M)*31)-1)+(d2->D-d1->D);
	if (days<0)
		printf("\n Days = %d",-days);
	else
		printf("\n Days = %d",days);
}
void ReadDate(struct date *d)
{
printf("\n Enter the date : ");
scanf("%d %d %d",&d->D,&d->M,&d->Y);
}
int main()
{
	struct date *d1,*d2;
	d1=(struct date*)malloc(sizeof(struct date));
	d2=(struct date*)malloc(sizeof(struct date));
	ReadDate(d1);
	ReadDate(d2);
	PrintDate(d1);
	PrintDate(d2);
	FindDays(d1,d2);
}