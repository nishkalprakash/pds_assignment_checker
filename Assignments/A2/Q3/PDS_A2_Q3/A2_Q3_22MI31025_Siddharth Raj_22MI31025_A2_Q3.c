#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
printf("Enter coefficients a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
float root1,root2;//variables to store root
root1=(-b+pow((b*b-4*a*c),1/2))/(2*a);//compute 1st root
root2= (-b-pow((b*b-4*a*c),1/2))/(2*a);//compute 2nd root
printf("roots are %f,%f",root1,root2);
return 0;
}
