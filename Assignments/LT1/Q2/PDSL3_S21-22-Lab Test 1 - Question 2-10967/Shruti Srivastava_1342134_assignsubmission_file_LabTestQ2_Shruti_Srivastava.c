/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10
   Section 03 */
#include<stdlib.h>
#include<stdio.h>

int main()
{
   float xo,prev,p,E,x1;
   int i,k,c=1;

   printf("Enter the value of xo\n");
   scanf("%f",&xo);
   printf("Enter the value of E\n");
   scanf("%f",&E);
   printf("Enter the number of maximum iterations\n");
   scanf("%d",&k);

   printf("Iterations          xo           x1                 Error\n");

   for(i=1; i<=k; i++)
   {
      prev = xo;
      x1 = xo - (((xo*xo*xo)-25)/(3*xo*xo));
      p= x1- xo;
      printf("%d              %f         %f            %f\n",c,xo,x1,((-1)*p));
      xo=x1;

      if( abs(p) < E )
         { x1 = xo - (((xo*xo*xo)-25)/(3*xo*xo));
         }
      if(p==0)
        {
           printf("The square root is   %f",x1);
           break;
        }
      c++;

    }
      return 0;
}
