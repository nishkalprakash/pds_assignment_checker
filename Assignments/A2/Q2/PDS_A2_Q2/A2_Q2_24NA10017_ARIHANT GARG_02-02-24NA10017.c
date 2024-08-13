#include <stdio.h>
#include <math.h>

/* Code to do complex calculation
 Code creater: Arihant Garg
 Roll No:24NA10017*/


int main() {

float alpha=0.306;
float rho=1.2;
float Rs=6.96e8;
float Ts=1.3654e-11;
float D=1.496e11;
float Tp;



Tp=Ts*sqrt((Rs)*sqrt((1-alpha)/rho)/2*D);

printf("Value of Tp is %le",Tp);
return 0;
}


/*******************************************************************************
                          <Code for user inputs>
                          
#include <stdio.h>
#include <math.h>

int main() {

float alpha=0.306;
float rho=1.2;
float Rs=6.96e8;
float Ts=1.3654e-11;
float D=1.496e11;
float Tp;


Printf("value of alpha is");
scanf("%le",alpha);


Printf("\nvalue of rho is");
scanf("%le",rho);


Printf("\nvalue of Rs is");
scanf("%le",Rs);


Printf("\nvalue of Ts is");
scanf("%le",Ts);


Printf("\nvalue of D is");
scanf("%le",D);




Tp=Ts*sqrt((Rs)*sqrt((1-alpha)/rho)/2*D);

printf("Value of Tp is %le",Tp);
return 0;
}
            
                          
***************************************************************************/
/*  comment:  the code is working fine in both the cases but there is a bit of precision error in user input case */



