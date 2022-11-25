// find out the two roots of quadratic equation 
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,r1,r2;//declaring the values of a,b,c,r1,r2
printf("enter the the values of a,b,c ");
scanf("%f %f %f",&a,&b,&c);//read the values of a ,b,c 
float d ;//declaring the value of d
d=(b*b)-(4*a*c);
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
printf("the first root is %f\n",r1);// print the value of first root 
printf("the 2nd root is %f\n",r2);//print the value of second root 
return 0;
}


