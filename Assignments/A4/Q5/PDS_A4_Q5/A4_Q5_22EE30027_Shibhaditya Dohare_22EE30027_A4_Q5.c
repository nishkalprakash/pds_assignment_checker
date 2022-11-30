/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 4
Discription : To aproximate roots of cubic polynomials 
*/
#include<stdio.h>
int main()
{
	int x1, x2, x3, x4;
	double a=-5, b=5, c, pa, pb, pc, r;
	printf("type the coefficient of x^3:");
	scanf("%d", &x1);
	printf("type the coefficient of x^2:");
	scanf("%d", &x2);
	printf("type the coefficient of x^1:");
	scanf("%d", &x3);
	printf("type the coefficient of x^0:");
	scanf("%d", &x4);
	pa=x1*a*a*a+x2*a*a+x3*a+x4;
	pb=x1*b*b*b+x2*b*b+x3*b+x4;
	while(b>a){
		
		if((pb>0)&&(pa<0)){
			
			c=-((b*pa-a*pb)/(pb-pa));
			pc=x1*c*c*c+x2*c*c+x3*c+x4;
			if(pc>0){
				b=c;
				}
			else if ((pc<=0.001)&&(pc>=-0.001))
				{
					r=c;
					break;
				}
			else
				{
				a=c;
				}
			}
	else if((pb<0)&&(pa>0)){
			
			c=-((b*pa-a*pb)/(pb-pa));
			pc=x1*c*c*c+x2*c*c+x3*c+x4;
			if(pc>0){
				b=c;
				}
			else if ((pc<0.001)&&(pc>-0.001))
				{
					r=c;
					break;
				}
			else
				{
				a=c;
				}
			}
	}
	printf("The root of the polynomial is %0.4f", c);
return 0;
}

	

