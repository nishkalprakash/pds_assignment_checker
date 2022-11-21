#include<stdio.h>
#include<math.h>
int main()
  {
    float m=0.125;
float y,n;
 printf("Enter the value of y and n:");//Takes input from user
scanf("%f %f",&n,&y);
float g=9.78;
  float v = sqrt(2 * g * y);
float s=y/4;
float TotalD=y + (2*(s*(1-pow((1/4),n)))*4)/3;//	Calculates Distance
printf("Total distance traversed by ball is :");//Prints Distance
printf("%f",TotalD);
}


 

