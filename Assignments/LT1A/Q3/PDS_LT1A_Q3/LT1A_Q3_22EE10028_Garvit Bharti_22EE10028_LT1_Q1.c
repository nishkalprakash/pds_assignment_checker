#include<stdio.h>
#include<math.h>
int check(float a,float b,float c)/*function to check whether triangle exist or not*/
{
	if(a>b&&a>c)
	{
		if(a<b+c)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if(b>a&&b>c)
	{
		if(b<a+c)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if(c>a&&c>b)
	{
		if(c<a+b)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
	}
}
int main()
{
	int x1,x2,x3,y1,y2,y3,d;
	float a,b,c,e,f,g;
	printf("enter the coordinates");
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));/*calculating value of sides*/
	b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c = sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	d = check(a,b,c);
	if(d==1)
	{
		e = (pow(a,2)+pow(b,2)-pow(c,2))/(2*b*a);/*here i am calculating cos using cos(A)=(b^2+a^2-c^2)/2ab*/
		f = (pow(c,2)+pow(b,2)-pow(a,2))/(2*b*c);
		g = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
		if(e>0&&f>0&&g>0)/*for an acute angled triangle all angles are less than pie/2 and value of cos is positive in that range*/
		{
			printf("acute angled");
		}
		if(e==0||f==0||g==0)/*a right angle triangle will have an angle pie/2 so value of cos will be zero*/
		{
			printf("right angled");
		}
		if(e<0||f<0||g<0)/*an obtuse angle triangle will have an angle greater than 90 and cos is negative in that range*/
		{
			printf("obtuse angled");
		}
	}
	else
	{
		printf("invalid");
	}
	return 0;
}

