#include<stdio.h>
#include<string.h>
struct EMP
{
char name[100];
float wage;
int day;
};

int main()
{
int n,HRA=0,TA=0,BP=0;
printf("enter the number of empolyees present");
scanf("%d",&n);
struct EMP rrr[n];
for(int i=0;i<n;i++)
{
printf("enter the name of employee[%d]",i+1);
scanf("%s",&rrr[i].name);
printf("enter the wage/day ");
scanf("%f",&rrr[i].wage);
printf("number of days present ");
scanf("%d",&rrr[i].day);
}

for(int i=0;i<n;i++)
{
BP=((rrr[i].wage)*(rrr[i].day));
	if(BP<1000)
	{
	HRA=0.12*(BP);
	}	
	else
	{
	HRA=0.2*(BP);
	}

if(rrr[i].day>19)
	TA=0.1*(BP);
	float net=0;
	net=HRA+TA+BP;
	printf("name: ");
	puts(rrr[i].name);
	printf("Netpay : %f ",net);
}
TA=0,BP=0;HRA=0;
	return 0;
	}

