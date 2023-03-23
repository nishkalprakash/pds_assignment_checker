#include<stdio.h>
int main ()
{
    double alpha,rho,Rs,Ts,D,Tp;
    // The below lines are for the user to enter the values of alpha,rho,Rs,Ts,D,Tp
    printf("Enter alpha\n");
    scanf("%le",&alpha);
    printf("Enter sigma\n");
    scanf("%le",&rho);
    printf("Enter Rs\n");
    scanf("%le",&Rs);
    printf("Enter Ts\n");
    scanf("%le",&Ts);
    printf("Enter D\n");
    scanf("%le",&D);
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/(2*D));
    // The below line is for displaying the value of Tp
    printf("The value of Tp is %le",Tp);
    return 0;
}
// After testing the program when the value of the table are entered,the value of Tp is comming out to be 5.742861e-13

