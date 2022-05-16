#include <stdio.h>

int main()
{
    float xo, xval, eps;
    int max_itr;
    printf("Xo = ");
    scanf("%f", &xo);
    printf("e = ");
    scanf("%f", &eps);
    printf("maxIteration = ");
    scanf("%d", &max_itr);
    printf("iteration   x0        x1      error");
    for(int i=0; i<max_itr; i++){
        xval = xo - ((xo*xo*xo) - 25)/(3*xo*xo);
        printf("\n%d        %f  %f  %f",i+1, xo, xval, xo-xval);
        if(xo-xval< eps)
            break;
        xo = xval;
    }
    printf("\nThe square root is %f", xval);

}
