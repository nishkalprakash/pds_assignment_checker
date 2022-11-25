#include<stdio.h>
#include<math.h>

int main()

{  
  int a,b,c;
   printf("Enter three nos:");// Takes input from user
scanf("%d%d%d",&a,&b,&c);
     float x = ((-b)+sqrt(b*b -4*a*c))/(2*a);//Calculates Roots
float y =((-b)-sqrt(b*b -4*a*c))/(2*a);
printf("Two roots are:");//Print
printf("%f%f",x,y);
return 0;
}
