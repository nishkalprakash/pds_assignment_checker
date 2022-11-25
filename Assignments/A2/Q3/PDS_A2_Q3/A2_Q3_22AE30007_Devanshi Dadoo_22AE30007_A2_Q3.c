#include<stdio.h>
#include<math.h>// including math library
int main()
{
  int a, b, c;// declaring integers
  double root1, root2;// declaring 
  double discriminant;// declaring 
  printf("enter a");
  scanf("%d", &a);
  printf("enter b");
  scanf("%d", &b);
  printf("enter c");
  scanf("%d", &c);
  discriminant = b * b - 4 * a * c;// formula of discriminant

  root1 = (-b + sqrt(discriminant))/(2*a);// root 1 
  root2 = (-b - sqrt(discriminant))/(2*a);//root2
 printf(" root1= %2lf root2= %2lf", root1, root2);//printing final values
}
  

  
