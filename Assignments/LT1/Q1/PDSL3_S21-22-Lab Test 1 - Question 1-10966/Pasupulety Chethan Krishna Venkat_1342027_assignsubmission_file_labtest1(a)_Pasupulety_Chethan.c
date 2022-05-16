/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    int sal,house_loan,life_ins,med_ins,yr_sal,net_inc;

    printf("enter monthly salary:"); scanf("%d",&sal);

    printf("enter house loan:"); scanf("%d",&house_loan);

    printf("enter life insurance premium:"); scanf("%d",&life_ins);

    printf("enter medical insurance:"); scanf("%d",&med_ins);

    yr_sal=sal*12;

    if(yr_sal>=1000000){
            if(house_loan<=250000){
                net_inc=yr_sal-house_loan;
              } else net_inc=yr_sal-250000;

              if(life_ins<=150000){
                net_inc=net_inc-life_ins;
              } else net_inc=net_inc-150000;

              if(med_ins<=50000){
                net_inc=net_inc-med_ins;
              } else net_inc=net_inc-50000;

    } else net_inc=yr_sal;

    printf("net inc=%d\n",net_inc);

    if(net_inc>1500000) printf("total tax=%lf",(187500+0.3*net_inc));
    else if(net_inc>1250000 && net_inc<1500000) printf("total tax=%lf",(125000+0.25*net_inc));
    else if(net_inc>1000000 && net_inc<1250000) printf("total tax=%lf",(75000+0.2*net_inc));
    else if(net_inc>750000 && net_inc<1000000) printf("total tax=%lf",(37500+0.15*net_inc));
    else if(net_inc>500000 && net_inc<750000) printf("total tax=%lf",(12500+0.10*net_inc));
    else if(net_inc>250000 && net_inc<500000) printf("total tax=%lf",(0.05*net_inc));
    else printf("total tax=0");

return 0;
}

