#include <stdio.h>
#include <math.h>

int main()
{
      double mu, epsilon,sqroot;   //declaration of variables
      float c;
      printf("Enter the value of mu and epsilon: ");     //ask for user input 

        //mu=12.566 * pow(10, -7);
        //epsilon= 8.85* pow(10, -12)

      scanf("%lf %lf",&mu, &epsilon);                     //reads the input from user
      sqroot = sqrt(mu*epsilon);
      c=1/(sqroot);                                       //formula for speed of light
      printf("The speed of light is: %f",c);              //prints speed of light
      return 0;
}
