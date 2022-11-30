/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:4
Discription :To find root of the polynomial

*/
#include<stdio.h>
int main()
{
	double a,b,c,pa=0,pb=0,pc=0,root=0;
	int p1,p2,p3,p4;
	printf("Enter coefficient of x^0:");
	scanf("%d",&p4);
	printf("Enter coefficient of x^1:");
	scanf("%d",&p3);
	printf("Enter coefficient of x^2:");
	scanf("%d",&p2);
	printf("Enter coefficient of x^3:");
	scanf("%d",&p1);
	printf("Enter the values of a and b such that they have opposite signs\n");
	scanf("%lf %lf",&a,&b);
	pa=p1*a*a*a+p2*a*a+p3*a+p4;
	pb=p1*b*b*b+p2*b*b+p3*b+p4;

	while(b>a)
	{

		if((pb>0)&&(pa<0))
		{
			c=-(b*pa-a*pb)/(pb-pa);
			
			pc=p1*c*c*c+p2*c*c+p3*c+p4;
			if(pc>0)
				{
					b=c;
				}
			else 
				{
				if((pc<0.001)&&(pc>-0.001))
				{
					root=c;
					break;
				}
				else
					{
						a=c;
					}
				}
	
		}
		
		else if((pb<0)&&(pa>0))
		{
			c=-(b*pa-a*pb)/(pb-pa);
			
			pc=p1*c*c*c+p2*c*c+p3*c+p4;
			if(pc>0)
				{
					a=c;
				}
			else {
			    if((pc<0.001)&&(pc>-0.001))
				{
					root=c;
					break;
				}
			    else
				{
					b=c;
				}
				}
		
		}	
					
	}
	printf("Root of the polynomial:%0.4f",root);
		
	
	return 0;

}

