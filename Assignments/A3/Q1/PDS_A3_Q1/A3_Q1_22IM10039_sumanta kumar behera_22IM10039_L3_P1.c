# include<stdio.h>

# include<math.h>
// it shows time

int main()

{

      int SS, MM, HH;
      

      printf("enter SS, MM, HH");

      scanf("%d%d%d", &SS, &MM, &HH);



     if( HH<=23 && MM<=59 && SS<=59)  {

       printf("Valid time-%d", HH);
       printf(":");
       printf("%d", MM);
       printf(":");
       printf("%d", SS);
     }

      else {

         printf("Invalid time");

         }

       return 0;

     }
