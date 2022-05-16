#include <stdio.h>
#include <math.h>

int main()
{
    int msalary,houseloan, lifeIN, mediIN,yrincome,taxincome;
    float tax;
    printf("Enter monthly salary:");
    scanf("%d\n",&msalary);
    printf("Enter yearly house loan paid:");
    scanf("%d\n",&houseloan);
    printf("Enter yearly life insurance premium paid:");
    scanf("%d\n",&lifeIN);
    printf("Enter yearly medical insurance paid:");
    scanf("%d\n",&mediIN);
    yrincome=12*msalary;
    if(yrincome>=1000000)
    {
        if(houseloan<250000)
           yrincome-=houseloan;
        if(lifeIN< 150000)
           yrincome-=lifeIN;
        if(mediIN< 50000)
           yrincome-=mediIN;

    }
    taxincome=yrincome;
        if(taxincome>250001 && taxincome<=500000)
           {
            tax=(0.05 *taxincome);
           }
        if(taxincome>500001 && taxincome<=750000)
            {
             tax=12500 + (0.1 * (taxincome-  500000));
            }
        if(taxincome>750000 && taxincome<=1000000)
            {
              tax=37500 + (0.15 * (taxincome- 750000));
            }
        if(taxincome>1000000 && taxincome<=1250000)
            {
             tax=75000 + (0.2 * (taxincome- 1000000));
            }
        if(taxincome>1250000 && taxincome<=1500000)
            {
            tax=125000 + (0.25 * (taxincome- 1250000));
          }
        if(taxincome>1500000)
        {
            tax=187500 + (0.3 * (taxincome- 1500000));
        }

       printf("Total tax:%f",tax);
}
