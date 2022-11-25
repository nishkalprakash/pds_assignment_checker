/*We are going to declare variables using the global declaration section*/

#include<stdio.h>

int main()
{
	int x ; /* The variable we are using for a positive interger is x*/
	char y ; /* The variable we are using for a character is y*/
	float z ; /* The variable we are using for a very large floating point number is z*/

	scanf("%2d %c %f",&x,&y,&z);//Here we are taking the required inputs

	printf("%2d %c %f",x,y,z);//Here we are printing our result

	return 0;
}
