#include<stdio.h>
#include<stdlib.h>
struct student

int main ()
{
student S;
printf("The real value number is %lu\n", sizeof(S.vector));
printf("Enter type of height (f/c/m): ");
scanf("%c", &S.htype);
printf("Enter the real value vector: ");
if (S.htype == 'f') scanf("%s",&S.vector);
else if (S.htype == 'c') scanf("%d", &S.vector);
else if (S.htype == 'm') scanf("%f", &S.vector);
switch (S.htype)
{
  case 'f' : printf("%s\n", S.vector); break;
  case 'c' : printf("%d\n", S.vector); break;
  case 'm' : printf("%.2f\n", S.vector); break;
 default: printf("The real value vector\n");
}
}
