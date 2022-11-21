#include<stdio.h>
#include<math.h>
int main()
{
float m,g=978,Y,D;
int n;
printf("Enter the height from which ball released: ");
scanf("%f",&Y);
printf("Enter the value of n: ");
scanf("%d",&n); 
D=Y+((2*Y)/3)*(1-(pow (4,(1-n))));
printf("Total distance travelled is: %f",D);
return 0;
}


