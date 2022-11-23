#include <stdio.h>
int main()
{
float units;
printf("please enter the number of units");
scanf("%f",&units);

if(0<=units<=100)
{

	float a = units/2;
	a+=a/5;
	printf("the total bill is %f",a);

}
else if(100<=units<=200)
{
	float b = 50+3*(units)/4;
	b+=b/5;
	printf("the total bill is %f",b);


}
else if(200<=units<=300)
{
	float c = 125+6*(units)/5;
	c+=c/5;
	printf("the total bill is %f",c);
}
else if(units>300)
{
	float d= 245+3*(units)/5;
	d+=d/5;
	printf("the total bill is %f",d);
}












	return 0;
}
