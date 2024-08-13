#include<stdio.h>
#include<math.h>
int main(){
    double alpha, sigma,Rs,Ts,D,Tp,root1,root2;
    printf("enter values of alpha and sigma");
    printf("\n");
    scanf("%lf%lf",&alpha,&sigma);
    printf("\n");
    printf("Enter value of Rs :");
    printf("\n");
    scanf("%le",&Rs);
    printf("\n");
    printf("Enter value of Ts :");
    printf("\n");
    scanf("%le",&Ts);
    printf("\n");
    printf("Enter value of D :");
    printf("\n");
    scanf("%le",&D);
    printf("\n");
    
    //Tp=Ts*sqrt((Rs*sqrt((1-alpha)/sigma))/(2*D));
    root1=sqrt((1-alpha)/sigma);
    root2=sqrt((Rs*root1)/(2*D));
    Tp=Ts*root2;
    
    printf("Alpha: %lf\n",alpha);
    printf("Sigma: %lf\n",sigma);
    printf("Rs: %le\n",Rs);
    printf("Ts: %le\n",Ts);
    printf("D: %le\n",D);
    //printf("%lf\n",root1);
    //printf("%lf\n",root2);
    printf("Tp: %le",Tp);
    
    
    
    
    
    return 0;
}
