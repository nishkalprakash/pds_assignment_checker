#include<math.h>
#include<stdio.h>

int main()

{

 int a,b,c;
float root1,root2;
scanf("%d %d %d", &a, &b, &c);
root1= (-b + sqrt(b*b -4*a*c))/2a;
root2=(-b - sqrt(b*b -4*a*c))/2a;
printf(" Value of root1 is: %f", root1);
printf(" Value of root2 is: %f", root2);
return 0;

}



