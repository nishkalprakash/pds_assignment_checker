#include <stdio.h>
struct date{
	int d;
	int m;
	int y;
} ;

void PrintDate(struct date x){
		printf("%d/%d/%d",x.d, x.m, x.y );
	}

struct date ReadDate(struct date* y){
		
		printf("Enter the date in the format of DD/MM/YYYY :\n");
		scanf("%d %d %d",&y->d,&y->m,&y->y);


	}

void FindDays(struct date i, struct date j){
		int m,n,o,t;
		m = j.y-i.y;
		m= m*365;
		n= j.m-j.m ; 
		n = n*30;
		o= j.d - i.d;
		t= m + n +o ;
		printf("Days: %d",t);
	}
int main()
{
	

struct date d1, d2;

ReadDate(&d1);

ReadDate(&d2);
PrintDate(d1);
printf("\n");
PrintDate(d2);
printf("\n");
FindDays(d1,d2);

	return 0;
}