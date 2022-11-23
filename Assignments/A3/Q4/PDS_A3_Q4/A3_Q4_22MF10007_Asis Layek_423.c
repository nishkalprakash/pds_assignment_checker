#include<stdio.h>
#include<math.h>

int main() {
float electric_units;
scanf("%f",&electric_units);
if (electric_units ==100)
{

   printf("50");
}
  else if (100<& electric_units& <200)
 float bill1;
  {
       bill1= ((electric_units-100)*0.75+ 50)*1.2;
  }
 
  printf("\n your bill is :%f",bill1);
{
  else if (200<=&electric_units&>=300)
}
    float bill2; 
       (bill2=bill1+(electric_units-200)*1.44) //1.44 is the surcharge multiplied to the charge so it gets easy//

       (printf("\n your bill is :%f",bill2));
{
  else if (electric_units >300)
}
 float bill3
       bill3= (bill2 + (electric_units-300)*1.80);
}
    (printf("\n your bill is :%f",bill3));
       return 0;
       }
