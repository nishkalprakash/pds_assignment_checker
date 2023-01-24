// NAME BONTHU MATTHEWS 
// ROLL NO:: 22PH10013 
// SECTION 14 
// ASSIGNMENT 9, QUESTION: 1
#include <stdio.h>
 typedef struct date
{
	int days;
	int month;
	int year;
}Date;
Date readdate(Date &X)
{
	scanf("%d",&X.days);
	scanf("%d",&X.month);
	scanf("%d",&X.year);
}
void printdate( Date x,  Date y)
{
	printf("X= %d/%d/%d  ",x.days,x.month,x.year);
	printf("Y= %d/%d/%d  ",y.days,y.month,y.year);
}
int main ( )
{
    Date X;
    Date Y;
    readdate(X);
    readdate(Y );
    printdate(X,Y);
    return 0;
}