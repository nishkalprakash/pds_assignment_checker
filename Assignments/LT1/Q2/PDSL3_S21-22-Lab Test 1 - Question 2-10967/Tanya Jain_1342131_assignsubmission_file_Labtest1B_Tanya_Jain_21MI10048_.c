#include <stdio.h>

int main()
{
    //Declaring variables
    float x, x1, error=10, epsilon;
    int i=1, max_i;

    //reading values from the user
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of epsilon: ");
    scanf("%f", &epsilon);
    printf("Enter the value of max itreation: ");
    scanf("%d", &max_i);

    while(i<=max_i && error>epsilon) //condition to run the loop as per the question
    {
        error = (x*x*x - 25)/(3*x*x); //error is the f(x)/f'(x)
        x1 = x - error;
        printf("%d\t%f\t%f\t%f\n", i, x, x1, error);
        x = x1; //switching x and x1 in each irration
        i++;
    }

    printf("\nThe square root is %f\n", x); //printing the final value

    return 0;
}
