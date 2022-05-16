
/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include <math.h>

int main() {

    float x0,x1,tolerance;
    int i,iteration;
    float error;

    printf("Enter the values for X, Tolerance and Max Iterations respectively \n");
    scanf("%f%f%d",&x0,&tolerance,&iteration);


    printf("Iteration \t x0 \t x1 \t Error \n");

    for(i=1;i<=iteration;i++)
        {
            x1 = x0 - (  (pow(x0,3) - 25) /  (3*(pow(x0,2)))  );
            error=x0-x1;
            printf("%d \t %f \t %f \t %f \n",i,x0,x1,error);
            if(error<tolerance) break;
            x0=x1;

        }

    return 0;
}
