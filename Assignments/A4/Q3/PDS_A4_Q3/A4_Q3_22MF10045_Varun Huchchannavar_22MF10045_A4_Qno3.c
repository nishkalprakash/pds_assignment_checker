 # include<stdio.h>
int main()
	{
/* This program will read an integer value having less than or equal to 10 digits */
	int a,b,c;
	printf("Enter the number whose display is to be found");
	scanf("%d",&b);
	while(a>0)
{
	c=a%10;
	a=a/10;
	switch(c)
{
	case 0:
	 printf("zero \n");
	break;
case 1:
	 printf("one \n");
	break;
case 2:
	 printf("two \n");
	break;
case 3:
	 printf("three \n");
	break;
case 5:
	 printf("five \n");
	break;
case 4:
	 printf("four \n");
	break;
case 7:
	 printf("seven \n");
	break;
case 8:
	printf("eight \n");
	break;
case 9:
	 printf("nine \n");
	break;
case 6:
	printf("six \n");
	break;
}
}
return 0;
}
	
