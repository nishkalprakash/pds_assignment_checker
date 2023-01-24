#include <stdio.h>
struct date{
	int dd;
	int mm;
	int yyyy;
}d1,d2;
void printdate()
{
printf("date1 : %d/%d/%d\n",d1.dd,d1.mm,d1.yyyy);
printf("date2 : %d/%d/%d\n",d2.dd,d2.mm,d2.yyyy);
printf("\n");
}

void readdate()
{
	printf("enter dd");
	scanf("%d",&d1.dd);
	printf("enter mm");
	scanf("%d",&d1.mm);
	printf("enter yyyy");
	scanf("%d",&d1.yyyy);
	printf("enter dd");
	scanf("%d",&d2.dd);
	printf("enter mm");
	scanf("%d",&d2.mm);
	printf("enter yyyy");
	scanf("%d",&d2.yyyy);
}

void finddays()
{
int days,months,yrs,td;
days=d2.dd-d1.dd;
months=d2.mm-d1.mm;
yrs=d2.yyyy-d1.yyyy;
td=days+yrs*365+months*30;
if (td<0)
{
td=td*-1;
}
printf(" days is %d",td);
}

int main()
{
readdate();
printdate();
finddays();
return 0;
}

