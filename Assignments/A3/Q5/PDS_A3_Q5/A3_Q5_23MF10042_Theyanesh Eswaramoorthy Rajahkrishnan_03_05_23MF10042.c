//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("Enter coefficient of x^0\n");
  scanf("%d",&a);
  printf("Enter coefficient of x^1\n");
  scanf("%d",&b);
  printf("Enter coefficient of x^2\n");
  scanf("%d",&c);
  printf("Enter coefficient of x^3\n");
  scanf("%d",&d);
  printf("Enter coefficient of x^4\n");
  scanf("%d",&e);
  printf("Enter coefficient of x^5\n");
  scanf("%d",&f);
  printf("polynomial:%d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n",f,e,d,c,b,a);
  printf("derivative:%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n",f*5,e*4,d*3,c*2,b);
  return 0;
}
  
