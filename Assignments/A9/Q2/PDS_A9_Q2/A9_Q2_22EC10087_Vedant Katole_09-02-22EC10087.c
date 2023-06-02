/*Name- Vedant Katole
roll no - 22EC10087
section - 2
lab - 9
problem no - 9*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct Vector
{
    int dim;
    float *x;
}vec;


void check_simiar_ortho(vec X, vec Y)
{
    float sum = 0, mag_X = 0, mag_Y = 0;
    //calculating magnitudes of X and Y
    for(int i = 0; i < X.dim; i++){
        mag_X += X.x[i] * X.x[i];
    }
    mag_X = pow(mag_X , 0.5);
    for(int i = 0; i < Y.dim; i++){
        mag_Y += Y.x[i] * Y.x[i];
    }
    mag_Y = pow(mag_Y , 0.5);

    float dot_prod = 0, cos;
    //calculating dot product
    for(int i = 0 ; i < X.dim ; i++){
        dot_prod += X.x[i] * Y.x[i];
    }

    //calculating the value of cos theta
    cos = dot_prod / (mag_X * mag_Y);

    int flag = 0, k;

    k = X.x[0] / Y.x[0];


    for(int i =1 ; i < X.dim; i++){
        if(k != X.x[i]/Y.x[i]){
            flag = 1;
        }
    }

    if(cos == 0){
        printf("\nOrthogonal vectors");
    }
    else if(flag == 1){
        printf("\nIdentical vectors");
    }
    else{
        printf("\nThe vectors are neither similar nor orthogonal");
    }
}

int main()
{
    vec X, Y;
    //taking X and Y input
    printf("Enter the dimension : ");
    scanf("%d", &X.dim);
    X.x = (float *) malloc(X.dim* sizeof(float));
    printf("Enter the vector component :\n");
    for(int i = 0; i < X.dim ; i++){
        scanf("%f", &X.x[i]);
    }
    printf("\n");


    printf("Enter the dimension : ");
    scanf("%d", &Y.dim);
    Y.x = (float *) malloc(Y.dim* sizeof(float));
    printf("Enter the vector component :\n");
    for(int i = 0; i < Y.dim ; i++){
        scanf("%f", &Y.x[i]);
    }
    printf("\n");


    if(X.dim != Y.dim){
        printf("Please enter vectors with equal dimension");
        return 0;
    }
    check_simiar_ortho(X, Y);
    return 0;
}
