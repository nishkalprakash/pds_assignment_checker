/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 4
 Question No :5
 Description :program to find roots of cubic polynomial
*/
#include <stdio.h>
int main()
{
	int A,B,C,D;
	double a,b,pa,pb;//declaring variables
	printf("Enter coefficient of x^0:\n");
	scanf("%d",&D);
	printf("Enter coefficient of x^1:\n");
	scanf("%d",&C);
	printf("Enter coefficient of x^2:\n");
	scanf("%d",&B);
	printf("Enter coefficient of x^3:\n");
	scanf("%d",&A);

    do
    {
    	printf("enter values of a and b such that p(a) and p(b) has opposite sign");
    	scanf("%lf %lf",&a,&b);
    	pa=A*a*a*a+B*a*a+C*a+D;
    	pb=A*b*b*b+B*b*b+C*b+D;
    }while(pa*pb>0);//if p(a) and p(b) has same sign input again

    double c,pc;
     c=pc=0.0;
    do{
      c= a - (pa*(a-b)/(pa-pb)); //find c
      pc=A*c*c*c + B*c*c + C*c + D; //find p(c)
      if(pc<0.001 && pc > -0.001)  //absolute value less than 0.001
      {
     	printf("Root of the polynomial: %lf \n", c);
     	break;
      }  
      else
      {
      	if((pa*pc)>0)//p(a) and p(c) has same sign
      		a=c;
      	else
      		b=c;
      }                                                            
    }while(1);
	return 0;


}
