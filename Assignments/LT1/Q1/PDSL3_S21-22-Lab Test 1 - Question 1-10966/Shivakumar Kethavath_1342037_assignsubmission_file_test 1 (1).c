/*kethavath shivakumar
21MI31013*/

#include<stdio.h>
#include<math.h>

int main ()
{
    int monthsal,hloan,lic,medical,sum;

    float tax;

 printf (" ENTER YOUR  MONTHLY SALARY: ");
scanf("%d", &monthsal);
printf (" enter home loan: ");
scanf("%d", &hloan);
printf (" ENTER YOUR  LIC: ");
scanf("%d", &lic);
printf (" enter your medical insurance: ");
scanf("%d", &medical);

sum=monthsal+hloan+lic+medical;
printf("total income is: %d", sum);
    if( sum >=0 && sum <=250000)
    {
        tax= 0;
        printf("your income tax: %f\n",tax);
    }
    else if (sum>=250001&&sum<=500000)
    {
        tax= (0.05)*(sum-250000);
        printf("your income tax: %f\n", tax);

    }
    else if( sum >=500001 && sum <= 750000)
    {
        tax=12500+ (0.10)*(sum-500000);
        printf("your income tax: %f\n",tax);

    }
    else if (sum>=750001&&sum<=1000000)
    {
        tax=37500+ (0.15)*(sum-1000000);
        printf("your income tax: %f\n",tax);
    }
    else if (sum >= 1000001 && sum<= 1250000)
    {
        tax=75000+ (0.20)*(sum- 1250000);
        printf("your income tax: %f\n",tax);
    }
    else if (sum >= 1250001 && sum<= 1500000)
    {
        tax=37500+ (0.15)*(sum-1500000);
        printf("your income tax: %f\n",tax);
    }
    else if(sum>=1500001)
    {
        tax=37500+ (0.15)*(sum-1500001);
        printf("your income tax: %f\n", tax);
    }
    else
    {
        printf("SORRY ! invalid salary \n");
    }

return 0;

}
