#include<stdio.h>
#include<math.h>
int main()
{
float mew,epsilon;
scanf("%f %f",&mew,&epsilon);
double c = 1/(sqrt(mew*epsilon));
printf("The speed of light is = %lf",c);
return 0;
}
