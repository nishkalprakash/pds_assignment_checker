/*

SECTION 14

Roll No:22EE10048

Name: Brij

Lab Test 1

Description-
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("Enter x and y coordinates of first point \n");
	scanf("%d %d",&x1,&y1);
	printf("Enter x and y coordinates of second point \n");
	scanf("%d %d",&x2,&y2);
	printf("Enter x and y coordinates of third point \n");
	scanf("%d %d",&x3,&y3);
	
	float l1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//Calculating
	float l2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));//lengths of
	float l3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));//sides
	float k1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	float k2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
	float k3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
	if(((l1+l2)<=l3)||((l2+l3)<=l1)||((l3+l1)<=l2))//TRIANGLE INEQUALITY
	printf("Invalid\n");
	else
	{
		if(((k1+k2-k3)==0)||((k2+k3-k1)==0)||((k3+k1-k2)==0))//CONDITION FOR RIGHT TRIANGLE
		printf("Right Angled\n");
		else if(((k1+k2-k3)>0)&&((k2+k3-k1)>0)&&((k3+k1-k2)>0))//CONDITION FOR ACUTE ANGLED TRIANGLE
		printf("Acute Angled\n");
		else if(((k1+k2-k3)<0)||((k2+k3-k1)<0)||((k3+k1-k2)<0))//CONDITION FOR OBTUSE ANGLED TRIANGLE
		printf("Obtuse Angled\n");
		
	}
	return 0;
}
