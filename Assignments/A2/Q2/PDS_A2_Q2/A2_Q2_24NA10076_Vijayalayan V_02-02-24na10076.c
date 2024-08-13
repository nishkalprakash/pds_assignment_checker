//program to compute the sum of the series
//code creater:vijayalayan v
//roll number:24NA10076
#include<stdio.h>
#include<math.h>
int main()
{
    float alpha,rho,rs,ts,d,A,R,S,T,F,tp,P,x;
    printf("\nenter the value of alpha,rho,rs,ts,d\n");
    scanf("%f%f%f%f%f",&alpha,&rho,&rs,&ts,&d);
    
    tp=ts*(sqrt((rs*(sqrt((1-alpha)/rho)))/(2*d)));
    //x = 1-alpha;
    //printf("%f",sqrt(x));
    printf("tp value is %f\n",tp);
    A=0.306;
    R=1.2;
    S=6.96e8;
    T=1.3654e-11;
    F=1.496e11;
    P=T*(sqrt((S*(sqrt((1-A)/R)))/(2*F)));
    printf("tp value witjout user input=%f",P);
    return 0;
}
    
