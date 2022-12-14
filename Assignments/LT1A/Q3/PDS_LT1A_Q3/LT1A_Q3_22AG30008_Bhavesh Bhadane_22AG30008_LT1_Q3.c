/*
  Section 14
  Roll no : 22AG30008
  Name : Bhavesh Nitin Bhadane 
  Assignment no - Lab test 1
  
*/

#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("Enter the first coordinate:\n");
	scanf("%d%d",&x1,&y1);
	printf("Enter the second coordinate:\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter the third coordinate:\n");
	scanf("%d%d",&x3,&y3);

	int a,b,c;

	a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));

float slope1,slope2,slope3;

   slope1= (y2-y1)/(x2-x1);
   slope2=(y3-y2)/(x3-x2);
   slope3=(y3-y1)/(x3-x1);


   if(a+b<c && b+c<a && a+c<b)
	{
		printf("Invalid");
	}

	if(a+b>c && b+c>a && a+c>b)
	{
		if(pow(a,2)+ pow(b,2)== pow(c,2) || pow(b,2)+ pow(c,2)== pow(a,2) || pow(a,2) + pow(c,2)== pow(b,2))
		{
			printf("It is Right Angled Triangle");
		}
		if (slope1<0 || slope2<0 || slope3<0)
		{
			printf(" It is Obtuse angled triangle");

		}
		else {
			printf("It is Acute angled Triangle");

		}
	}

	

	return 0;
}
