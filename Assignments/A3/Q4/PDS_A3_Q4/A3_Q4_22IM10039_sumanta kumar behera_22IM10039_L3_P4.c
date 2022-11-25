# include<stdio.h>

# include<math.h>
//calculating electric bills

int main ()

{

     float units;

     float bill;
     float finalbill;

     printf("units");

     scanf("%f", &units);

      if(units<=100) {

     printf("bill : %f",((units * 0.5) * 1.20));

     }

    else if(units<=200) {

    printf("bill : %f", (((units-100) * 0.75  + 50) * 1.20));

 }

   else if (units<=300) {

    printf("bill : %f", (((units-200) * 1.20 + 125) * 1.20));

  }

   else {

   printf("bill : %f", (((units-300) * 1.50 + 245) * 1.20));

  }

   return 0;

   }




