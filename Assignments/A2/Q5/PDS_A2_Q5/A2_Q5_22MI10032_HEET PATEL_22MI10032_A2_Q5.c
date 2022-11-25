#include<stdio.h>
#include<math.h>
int main()
{
 int y ;
float n ;
printf("Enter the height from which it is released \n");
scanf("%d", &y);
printf("Enter the number of times when ball touches the ground\n");
scanf("%f",&n);
float d ;
d = (y + (2*y*(1-pow((0.25),n)))/3);
printf("Total distance traversed by ball is : %f" , d );
return 0 ;
}
