/*name : vyshnavi_lagudu
dept : EE
roll number:21EE10044
assignment class :3
package : code blocks
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	printf("enter the first coordinates:");
	scanf("%d%d",&x1,&y1);
	printf("enter the second coordinates:");
	scanf("%d%d",&x2,&y2);
	printf("enter the third coordinates:");
	scanf("%d%d",&x3,&y3);
	double d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	double d2=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	double d3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	if(d1>d2+d3 || d2>d1+d3 || d3>d2+d1)
	{
		printf("this is valid triangle");
		if(d1*d1<d2*d2+d3*d3 || d2*d2<d1*d1+d3*d3 || d3*d3<d2*d2+d1*d1)
		{
			printf("this is acute angled triangle");
		}
		else if(d1*d1>d2*d2+d3*d3 || d2*d2>d1*d1+d3*d3 || d3*d3>d2*d2+d1*d1)
		{
			printf("this is obtuse angled triangle");
		}
		else if(d1*d1==d2*d2+d3*d3 || d2*d2==d1*d1+d3*d3 || d3*d3==d2*d2+d1*d1)
		{
			printf("this is right angled triangle");
		}
	}
	else
	{
		printf("this is invalid triangle");
	}
	return 0;
}
