#include <stdio.h>
#include <math.h>
int main()
{
float y, g;
int n;
printf("Enter the value of Y i.e the height which it is fallen from");
g=9.78; 
scanf("%f", &y);
printf("enter the number of times it touches the ground");
scanf("%d", &n);

int sum=0; 
sum=(y*(1-powf(0.25, n))/0.75);


printf("%d", sum);

return 0;
}
