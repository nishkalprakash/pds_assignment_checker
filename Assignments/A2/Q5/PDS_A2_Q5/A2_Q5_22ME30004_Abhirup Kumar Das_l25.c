#include<stdio.h>
#include<math.h>
int main()
{

int a,b;
scanf("%d, %d", &a, &b);
printf("%f", a*(1-pow(0.25,b))/0.75);
return 0;
}
