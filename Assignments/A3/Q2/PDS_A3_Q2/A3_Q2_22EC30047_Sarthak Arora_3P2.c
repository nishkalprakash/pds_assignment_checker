/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 3
*/ 




# include <stdio.h>
# include <stdlib.h>


int main()
{
 	int num, a, b; 
	printf(" enter a number :");
	scanf("%d",&num);
	a = num/10;
	b= num%10;
	printf(" the entred number in  words is : ");
	if(a==2)
		printf("twenty  ");
	else if(a==3)
		printf("Thirty  ");
	else if(a==4)
		printf("fourty  ");
	else if(a==5)
		printf("fifty  ");
	else if(a==6)
		printf("sixty  ");
	else if(a==7)
		printf("seventy  ");
	else if(a==8)
		printf("eighty  ");
	else if(a==9)
		printf("ninety ");



		
	if(b==1)
		printf("one\n");
	else if(b==2)
		printf("two\n");
	else if(b==3)
		printf("three\n");
	else if(b==4)
		printf("four\n");
	else if(b==5)
		printf("five\n");
	else if(b==6)
		printf("six\n");
	else if(b==7)
		printf("seven\n");
	else if(b==8)
		printf("eight\n");
	else if(b==0)
		printf("\n");

		

	return 0;
}
