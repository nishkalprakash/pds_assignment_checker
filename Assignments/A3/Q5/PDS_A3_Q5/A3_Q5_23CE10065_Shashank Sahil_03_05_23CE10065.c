//Lab 3
// Name- Shashank Sahil
// Roll number - 23CE10065
#include <stdio.h>
int a,b,c,d,e,f;
int main(){
    printf("POLYNOMIAL DERIVATIVE CALCULATOR\n");
    printf("Enter the cofficient of x^0(Constant Term)\n");
    scanf("%d",&f);
    printf("Enter the cofficient of x^1\n");
    scanf("%d",&e);
    printf("Enter the cofficient of x^2\n");
    scanf("%d",&d);
    printf("Enter the cofficient of x^3\n");
    scanf("%d",&c);
    printf("Enter the cofficient of x^4\n");
    scanf("%d",&b);
    printf("Enter the cofficient of x^5\n");
    scanf("%d",&a);


    printf("Entered Polynomial is ---\n%d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d ",a,b,c,d,e,f);
    printf("Derivative is ---\n%d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d ",5*a,4*b,3*c,2*d,1*e);


    
}