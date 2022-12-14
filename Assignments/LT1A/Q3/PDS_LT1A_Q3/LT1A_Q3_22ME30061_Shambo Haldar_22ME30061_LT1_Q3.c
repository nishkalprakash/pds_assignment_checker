/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: (Lab test - 1) - Set-A
Description : Program to check if a triangle is acute-angled,right-angled or obtuse-angled
*/

#include<stdio.h>
#include<math.h>
int dist(int a,int b,int c,int d)
{
	int distance,sumsquare;
	sumsquare = (b - a)*(b - a) + (d - c) * (d - c);
	distance = pow(sumsquare,0.5);
	return distance;
}

int main()
{
	int x1,x2,x3,y1,y2,y3,dist1,dist2,dist3,max,length1,length2;
	printf("Enter the coordinates x1,x2,x3,y1,y2,y3:");
	scanf("%d,%d,%d,%d,%d,%d",&x1,&x2,&x3,&y1,&y2,&y3);
	dist1 = dist(x1,y1,x2,y2);
	dist2 = dist(x2,y2,x3,y3);
	dist3 = dist(x3,x1,y3,y1);
	if(dist1 > dist2)
	{
		max = dist1;
		length1 = dist2;
	}
	else
	{
		max = dist2;
		length1 = dist1;
	}

	if(dist3 < max)
		length2 = dist3;
	else
	{
		length2 = max;
		max = dist3;
	}
	if(max < length1 + length2)
		printf("invalid");
	else if(length1*length1 + length2*length2 == max*max)
		printf("Right Angled");
	else if(length1*length1 + length2*length2 < max*max)
		printf("Acute Angled");
	else
		printf("Obtuse Angled"); 
	return 0; 
}
