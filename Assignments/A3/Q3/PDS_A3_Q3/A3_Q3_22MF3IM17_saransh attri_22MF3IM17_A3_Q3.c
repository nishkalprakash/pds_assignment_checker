#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  char c;
float a,b,r;
  printf("what would you like to do\n+for addition\n- for subtaction\n* for multiplication\n/ for division\n");
scanf("%c",&c);
switch(c)
{
  case '+':
        {
          printf("u chose addition type a and b\n");
          scanf("%f %f",&a,&b);
          r=a+b;
          printf("input \t\t\t output\n + %.3f %.3f \t %.3f\n",a,b,r);
        }
break;
  case '-':
         {
          printf("u chose subtraction type a and b\n");
          scanf("%f %f",&a,&b);
          r=a-b;
          printf("input \t\t\t output\n - %.3f %.3f \t %.3f\n",a,b,r);
         }
break;
  case '*':
         {
          printf("u chose multiplication type a and b\n");
          scanf("%f %f",&a,&b);
          r=a*b;
          printf("input \t\t\t output\n * %.3f %.3f \t %.3f\n",a,b,r);
        }
break;
  case '/':
       {
          printf("u chose division type a and b\n");
          scanf("%f %f",&a,&b);
          if(b==0)
          printf("error denominator cannot be 0\n");
          else
          {
          r=a/b;
          printf("input \t\t\t output\n / %.3f %.3f \t %.3f\n",a,b,r);
          }
          }
break;
  default:
         printf("give a valid statement");
}
return 0;

}
