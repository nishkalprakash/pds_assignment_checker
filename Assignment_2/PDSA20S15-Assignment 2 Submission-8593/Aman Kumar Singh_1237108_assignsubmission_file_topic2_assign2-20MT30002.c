//Name Aman Kumar Singh Roll No. 20MT30002

#include <stdio.h>
#include <math.h>

int main()
{
 float a,b,c,det,ans1,ans2;

  printf("Consider the Quadratic Equation ax²+bx+c where a ≄ 0 \n");

  printf("Now Enter The Value for a,b and c \n");

  printf("Enter a \n");
  scanf("%f",&a);

  printf("Enter b \n");
  scanf("%f",&b);

  printf("Enter c \n");
  scanf("%f",&c);

    if(a==0)
    {
    printf("Error! Not a Quadratic Equation");
    return 0;
    }
printf("The Quadratic Equation is %.2fx²+%.2fx+%.2f where a ≄ 0 \n",a,b,c);

det=((b*b)-(4*a*c));
ans1=(-b-sqrt(det))/(2*a);
ans2=(-b+sqrt(det))/(2*a);


    if(det>0)
    {
     printf("It has Two Real Solution. The Solutions are :- \n %f \n %f \n",ans1,ans2);
    }

    else if(det==0)
    {
     printf("It has one Real Solution. The Solution is %f:- \n",ans1);
    }

    else if(det<0)
    printf("Only Complex Roots Exists. No Real Solutions \n");


return 0;

}
