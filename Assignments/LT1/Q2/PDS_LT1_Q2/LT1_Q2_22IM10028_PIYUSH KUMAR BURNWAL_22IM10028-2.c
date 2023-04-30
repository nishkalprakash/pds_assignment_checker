#include <stdio.h>
#include <math.h>
int main()
{
    int n,nd=0,r=0,d,di,p;//variable p will be used to store a copy of n
    printf("Enter the Integer:");//accepting an integer from the user
    scanf("%d",&n);
    p=n;
    while (n!=0)
        {
            nd++;//computing number of digits in the number
            n=n/10;

        }
    n=p;//storing the correct value of n in n since n was changed in the previous loop
    if (n%2!=0)//if number is odd computing MSB to LSB
    {
        printf("Most significant digits to least significant digits:\n");


        for (int i=nd-1;i>=0;i--)
        {
            di=(n/(int)(pow(10,i)));//computational formula for our desired output
            if (di<0)
            {
                printf("%d, ",(di*(-1)));//we just want the digits so converting negative number to positive number
            }
            else{
                printf("%d, ",di);
            }

        }
        printf("\n\n\n");


    }
    else//for even number computing from LSB to MSB
    {
        printf("Least significant digits to most significant digits:\n");
        for (int i=nd;i>=1;i--)
        {
            di=n%((int)(pow(10,i)));//computational formula for LSB to MSB
            if (di<0)
            {
                printf("%d, ",(di*(-1)));//we just want the digits so converting negative value to positive value
            }
            else{
                printf("%d, ",di);
            }
        }
        printf("\n\n\n");



    }








//computing reverse of a number and its absolute difference from the original number
    while (n!=0)
    {
        d=n%10;
        r=(r*10)+d;//forming the reversed number
        n=n/10;
    }
    n=p;//storing correct value of n since our n was changed in the previous loop
    printf("Reversed number= %d\n",r);
    if ((r-n)>0)//since we want the absolute difference
    {
        printf("Difference between Reverse and original number = %d",(r-n));
    }
    else
    {
        printf("Difference between Reverse and original number = %d",(n-r));
    }

    return 0;

}
