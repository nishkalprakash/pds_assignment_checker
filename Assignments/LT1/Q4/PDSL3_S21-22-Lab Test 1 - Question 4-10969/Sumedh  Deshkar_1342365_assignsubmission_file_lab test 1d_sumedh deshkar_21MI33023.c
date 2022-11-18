/*
name- sumedh deshkar
roll no. - 21MI33023
section - 3
*/




#include <stdio.h>
#include<math.h>

int main() {
    int n,i;
    float numx[100],numy[100], sumx = 0.0, avgx, sumy = 0.0, avgy,sum2=0.0;
    float m,b; /*m is the slope anf b is the c intercept*/

    printf("Enter the number of xcordinates of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &numx[i]);
        sumx += numx[i];
    }

    avgx = sumx / n;
    printf("Average of x cordinate = %f", avgx);


    printf("\n Enter the number of ycordinates of elements: ");
    scanf("%d", &n);                                          /*note that number of x coordinates must be equal to the number of y cordinates*/

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &numy[i]);
        sumy += numy[i];
    }

    avgy = sumy /n;
    printf("Average of y cordinate = %f", avgy);






     for (i = 0; i < n; ++i){
     m = sum2 + ((numx[i]-avgx)*(numy[i]-avgy))/(pow((numx[i] - avgx), 2)) ;}


    printf("\n the slope of the line is= %f ",m);

    b=avgy - m*avgx;

    printf("\n the y intercept of the line is= %f ",b);

    printf("the equation of line is y=%f*x + %f",m,b);


    return 0;
}
