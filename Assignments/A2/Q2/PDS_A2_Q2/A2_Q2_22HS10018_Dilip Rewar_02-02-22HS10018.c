#include<stdio.h>
int main()
{
    double alpha, rho, Rs, Ts, D, Tp;
    printf("Enter Ts\n");
    scanf("%le",&Ts);
    printf("Enter Rs\n");
    scanf("%le",&Rs);
    printf("Enter alpha\n");
    scanf("%le",&alpha);
    printf("Enter rho\n");
    scanf("%le",&rho);
    printf("Enter D\n");
    scanf("%le",&D);
    Tp = Ts*sqrt((Rs*sqrt((1-alpha)/rho))/2*D);
    printf("The value of Tp is %le", Tp);
    // The value of Ts is coming as 8.591320e-02, I checked  it again and agian also made some changes in the code like replacing le with lf
    return 0;
}
