#inclued <stdio.h>
int main()
{
	int day, month, year;
	printf("enter the day ");
	scanf("%d", &day);
	
	printf("enter month");
	scanf("%d", &month);
	
	printf("enter year");
	scanf("%d", &year );
	
	if (year % 4 == 0) 
		{if(month>=1 && month<=12){if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){if(day>=1 && day<=31){printf("valid date");}else if{ }}}
}
