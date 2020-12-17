#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    float r1, r2;
    printf("Enter the value of a, b, c : ");
    scanf("%f%f%f", &a ,&b ,&c);
    printf("The coefficients of the equation are : %f, %f, %f\n", a, b, c);
    if(b*b-(4*a*c)<0){
        printf("Nothing else to be done.\n");
    }
    else{
        r1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("The roots of the equation are : %f, %f\n", r1,r2);
    }
    if(r1==r2){
        printf("The roots are equal.");
    }

return 0;
}
