#include <stdio.h>

int main()
{
	
int x;
printf("press 1 for  addition, press 2 for subtraction, press 3 for multiplication, press 4 for division ");
scanf("%d",&x);

int a;
printf("please enter the first number");
scanf("%d",&a);

int b;
printf("please enter the second number");
scanf("%d",&b);

if(x==1)
{

printf("%d+%d=",a,b);
int c=a+b;
printf("%d",c);

}
else if(x==2)
{
	
printf("%d-%d=",a,b);
int d=a-b;
printf("%d",d);


}
else if(x==3)
{

	printf("%d*%d=",a,b);
	int e= a*b;
	printf("%d",e);
} 
else if(x==4)
{

	printf("%d/%d=",a,b);
	int f=a/b;
	printf("%d",f);
}



















return 0;
}
