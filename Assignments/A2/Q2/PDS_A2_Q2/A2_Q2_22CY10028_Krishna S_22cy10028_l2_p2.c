#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;   // assigning the variables//
char a;
float y;
scanf("%2d %c %f ", &x, &a, &y);  // getting the input from the user//

printf("You gave %2d \n", x);   // printing the values entered//
printf("You gave %c \n", a);
printf("You gave %f \n", y);
return 0;

}
