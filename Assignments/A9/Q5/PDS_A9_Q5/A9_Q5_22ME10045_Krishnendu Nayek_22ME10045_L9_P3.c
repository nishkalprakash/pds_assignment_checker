#include<stdio.h>
#include<stdlib.h>
struct date{
int D;
int M;
int Y;
};
void ReadDate(struct date *d )
{
printf("\n Enter the date:");
scanf("%d %d %d",&d->D,&d->M,&d->Y);
}
void PrintDate(struct date *d )
{
printf("\n The entered date is %d/%d/%d",d->D,d->M,d->Y);
}

void FindDays(struct date *d1,struct date *d2)
{
int days;
days=(d2->Y-d1->Y)*365+((d2->M-d1->M)*31-1)+(d2->D-d1->D);
if(days>0)
printf("\n Days = %d",days);
else
printf("\n Days = %d",-days);
}

int main()
{
struct date *d1,*d2;
d1=(struct date*)malloc(sizeof(struct date));
d2=(struct date*)malloc(sizeof(struct date));
ReadDate(d1);
PrintDate(d1);
ReadDate(d2);
PrintDate(d2);
FindDays(d1,d2);
}


