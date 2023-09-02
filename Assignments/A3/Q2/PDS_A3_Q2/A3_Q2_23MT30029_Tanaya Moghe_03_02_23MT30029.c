//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{
	int mark;
	printf("Enter student's marks\n");
	scanf("%d", &mark);
	if (mark >=0 && mark<=100)
	{	if(mark>=90)
			printf("Grade=Ex\n");
		else if(mark>=80)
			printf("Grade=A\n");
		else if(mark>=70)
			printf("Grade=B\n");
		else if(mark>=60)
			printf("Grade=C\n");
		else if(mark>=50)
			printf("Grade=D\n");
		else if(mark>=35)
			printf("Grade=P\n");
		else if(mark<35)
			printf("Grade=F\n");
	}
	else printf("input invalid\n");
	return 0;
}


