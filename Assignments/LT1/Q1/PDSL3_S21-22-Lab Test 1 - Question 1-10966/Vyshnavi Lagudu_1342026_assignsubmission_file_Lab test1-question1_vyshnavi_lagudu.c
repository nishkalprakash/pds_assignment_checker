/*name           : vyshnavi_lagudu
dept             : EE
roll number      :21EE10044
assignment class :3c
package          : code blocks
comments: all inputs are integers and output value is float
*/
#include<stdio.h>
int main()
{
    int a,b,c,d,a1,total_income,its;
    float total_tax;
    printf("Monthly salary =");
    scanf("%d",&a);
    printf("\nHouse loan =");
    scanf("%d",&b);
    printf("\nLife insurance premium =");
    scanf("%d",&c);
    printf("\nMedical insurance =");
    scanf("%d",&d);
    a1=12*a;
    total_income=a1+b+c+d;
    if(a1<1000000){
                   total_income=total_income-a1;
                  }
    if(b<250000){
                total_income=total_income-250000;
                }
    if(c<150000){
                 total_income=total_income-150000;
                }
    if(d<50000){
                total_income=total_income-50000;
                }
    its=total_income;
    if((its>=0)&&(its<=250000)) total_tax=0;
    else if((its>250000)&&(its<=500000)) total_tax=0.05*its;
    else if((its>500000)&&(its<=750000)) total_tax=12500+0.1*(its-500000);
    else if((its>750000)&&(its<=1000000)) total_tax=37500+0.15*(its-750000);
    else if((its>1000000)&&(its<=1250000)) total_tax=75000+0.2*(its-1000000);
    else if((its>1250000)&&(its<=1500000)) total_tax=125000+0.25*(its-1250000);
    else if(its>1500000) total_tax=187500+0.3*(its-1500000);
    printf("\ntotal tax=%0.2f",total_tax);
   return 0;
}
