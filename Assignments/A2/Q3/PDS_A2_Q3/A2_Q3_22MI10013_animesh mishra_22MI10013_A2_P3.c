#include<stdio.h>
#include<math.h>

int main()
{
      int a,b,c;
      float q,p1,p2;
      scanf("%d\n%d\n%d" ,&a,&b,&c);
      q=sqrt(b*b-4*a*c);
      p1=(-b+q)/2*a;
      p2=(-b-q)/2*a;
      printf("%f%f",p1,p2); //Print
      return 0;
}


