#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	double a,b,c1,c2,c3,c4,x,pa,pb,c;
	printf("the eq is c1(x^3)+c2(x^2)+c3(x)+c4\n");
	printf("enter coefficient of x^0 i.e c4\n");
	scanf("%lf",&c4);
	printf("enter coefficient of x^1 i.e c3\n");
	scanf("%lf",&c3);
	printf("enter coefficient of x^2 i.e c2\n");
	scanf("%lf",&c2);
	printf("enter coefficient of x^3 i.e c1\n");
	scanf("%lf",&c1);
	printf("write values of a and b such that a root lies within");
	double pc=1;

	printf("write value of a (a<b)\n");
    scanf("%lf",&a);
    printf("write value of b (a<b)\n");
    scanf("%lf",&b);
    pa= (c1*a*a*a)+(c2*a*a)+(c3*a)+(c4);
    pb= (c1*b*b*b)+(c2*b*b)+(c3*b)+(c4);
    	 while(pa*pb>0)
    {
       printf("wrong range entered enter val of a and b again\n");
       printf("write value of a (a<b)\n");
    scanf("%lf",&a);
    printf("write value of b (a<b)\n");
    scanf("%lf",&b);
    pa= (c1*a*a*a)+(c2*a*a)+(c3*a)+(c4);
    pb= (c1*b*b*b)+(c2*b*b)+(c3*b)+(c4);
    }
    
    while((pc>=0.001)||(pc<=-0.001))

  { 
  	pa= (c1*a*a*a)+(c2*a*a)+(c3*a)+(c4);
    pb= (c1*b*b*b)+(c2*b*b)+(c3*b)+(c4);
    /*while(pa*pb>0)
    {
       printf("wrong range entered enter val of a and b again\n");
       printf("write value of a (a<b)\n");
    scanf("%lf",&a);
    printf("write value of b (a<b)\n");
    scanf("%lf",&b);
    double pa= (c1*a^3)+(c2*a^2)+(c3*a^1)+(c4);
    double pb= (c1*b^3)+(c2*b^2)+(c3*b^1)+(c4);
    }*/
    c=((pa*(a-b)/(pb-pa))+a);//x intercept of approx interval line
    	pc=(c1*c*c*c)+(c2*c*c)+(c3*c)+(c4);
    	if (pc*pa>=0)
    		a=c;
    	else if(pc*pb>=0)
    		b=c;
    }
    
  
  printf("root is %lf \n",c);
  return 0;
}
