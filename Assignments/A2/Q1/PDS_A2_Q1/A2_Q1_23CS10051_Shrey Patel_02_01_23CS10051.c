//Name:Shrey G Patel

//Roll NO.:23CS10051

//Read a floating point number and display integral and fractional part seperately

#include <stdio.h>

int main()

{

  float num,fractional_part;

  int integer_part;

    printf("Enter a floating number:");

    scanf("%f",&num);

    integer_part=num;

    fractional_part=num-integer_part;

    printf("Integral part is %d \n Fractional part is %f \n",integer_part,fractional_part);

return 0;

}
