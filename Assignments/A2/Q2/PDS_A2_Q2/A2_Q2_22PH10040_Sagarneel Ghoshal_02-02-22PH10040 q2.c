#include<stdio.h>
#include<math.h>

int main(){

    /*double alpha=0.306,sigma=1.2,Rs=6.96e8, Ts=1.3654e-11,D=1.496e11;
    double Tp=Ts*sqrt((Rs*sqrt((1-alpha)/sigma))/2*D);
    printf("The value of Tp is %le",Tp);*/


    double alpha,sigma,Rs,Ts,D,Tp;      //defining the type of variables//
    printf("Enter the value of alpha:");    //Prompting the user to enter a value//
    scanf("%lf",&alpha);                    //Scanning the value//
    printf("\nEnter the value of sigma:");
    scanf("%lf",&sigma);
    printf("\nEnter the value of Rs:");
    scanf("%lf",&Rs);
    printf("\nEnter the value of Ts:");
    scanf("%le",&Ts);
    printf("\nEnter the value of D:");
    scanf("%le",&D);

    printf("alpha=%le",alpha);
    printf("Rs=%le\n",Rs);
    printf("Ts=%le\n",Ts);


    double n=pow((1-alpha)/sigma,0.5);   //defining different variables to calculate small parts within the formula//
    double n2=(Rs*n)/(2.0*D);
    double n3=pow(n2,0.5);
    Tp=Ts*n3;
    printf("\nThe value of Tp is: %le",Tp);      //printing Tp

    //The value of Tp using the hard variables is 8.51321e-12 and using the data inputted from the users is 5.742861e-13.



    return 0;

}

