#include<stdio.h>

int main()
{

int day, month, year;


printf("Write date in DD-MM-YY format:]");

scanf("%d %d %d", &day, &month, &year);

if ((day<=31)  && (month<=12))
{

if ((month=02) && (day <=29) && (year%4==0)) 

		printf("VALID DATE");

 if ((month=02) && (day >28) && (year%4!=0)) 

		printf("INVALID DATE");
		}
			
		

			
else { printf("INVALID DATE");}



return 0;

}			
			
			
