/*  Name        = Pushkaraj Jagtap
    Roll no.    = 21MF3IM12
    Package     = Codeblock
    Assign class= 5
    Assign no.  = 1(a)
*/

#include<stdio.h>
#include<math.h>
int main()
{
   int n,m,k,d;
   float f;
      printf("Enter the number of machine:");
      scanf("%d",&m);
      printf("Enter the day number(1-7)");
      scanf("%d",&d);
          switch(d)
             {
               case 1: printf("Number of car manufactured:%d",m);
                      break;

               case 2: n=round(m+m/2+1+m/4);

                       printf("Number of car manufactured:%d",n);
                       break;

               case 3: printf("Enter the value of k which is less than m:");
                       scanf("%d",&k);
                       n=round((m-k)+(m-k)/2+(m-k)/4)+1;
                       printf("Number of car manufactured:%d",n);
                       break;

               case 4: printf("Enter the value of boosting factor f which is less than 1:");
                       scanf("%f",&f);
                       n=round(m+m*f);
                       printf("Number of car manufactured:%d",n);
                       break;

               case 5: printf("Enter the value of boosting factor f which is less than 1:");
                       scanf("%f",&f);
                       n=round(m+m*f);
                       printf("Number of car manufactured:%d",n);
                       break;

               case 6: printf("Enter the value of k which is less than m:");
                       scanf("%d",&k);
                       n=round((m-k)+(m-k)/2+(m-k)/4)+1;
                       printf("Number of car manufactured:%d",n);
                       break;

               case 7: printf("Enter the value of boosting factor f which is less than 1:");
                       scanf("%f",&f);
                       n=round(m+m*f);
                       printf("Number of car manufactured:%d",n);
                       break;

                default:printf("Invalid input");


             }
}
