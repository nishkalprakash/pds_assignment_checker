#include<stdio.h>

int main()
{
	int x;// declares variable x
	char ch;// declares character variable ch
	double l;// declares float value variable l
	printf("Enter the integer : ");
	scanf("%d", &x);//takes input
	getchar();// waits for the user to press any key
	printf("Enter the character : ");
	scanf("%c", &ch);//takes input
	printf("Enter the large number : ");
	scanf("%lf", &l);
	printf("Integer is %2d\n", x);//prints input 
	printf("Character is %c\n", ch);
	printf("Large number is %e\n", l);
return 0;
}


