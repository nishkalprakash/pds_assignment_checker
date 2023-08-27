#include<stdio.h>

int main()
{ unsigned int amt_dep, time_period;
  printf("Amount deposited:");
    scanf("%d", &amt_dep);
    printf("The period of deposit in year is:");
    scanf("%d", &time_period);
    float interest, total;
    printf("The interest rate is:");
    scanf("%f", &interest);
    total= amt_dep + amt_dep*interest*time_period/100;
    printf("The total amount to be paid is %f\n", total);
    return 0;
}
    
    
