//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{
int i,j,l,t;
float a,k;
int n[10];
float m[10];
printf("Enter number of students\n");
scanf("%d", &l);
if(l<10)
{
	for(i=0;i<l; i++)
	{
		printf("enter roll number\n");
		scanf("%d", &j);
		printf("Enter CGPA\n");
		scanf("%f", &a);
		n[i]=j;
		m[i]=a;
	}
	for(i=0; i<l;i++)
	{
		printf("Roll no: %d, CGPA: %f\n", n[i], m[i]);
	}
	for(i=0; i<l; i++)
	{
		k+=m[i];
	}
	printf("The avg CGPA is %f\n", (float)k/l);
	for(i=0; i<l-1;i++)
	{
		for(t=i+1; t<l; t++)
		{
			if ((m[i]-m[t])<0.01 && (m[i]-m[t])>-0.01)
			{
				printf("The roll numbers %d and %d have same CGPA\n", n[i],n[t]);
			}
		}
	}
}
return 0;
}
