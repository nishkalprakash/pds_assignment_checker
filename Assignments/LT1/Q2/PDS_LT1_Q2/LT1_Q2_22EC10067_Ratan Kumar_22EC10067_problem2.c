/* Name: Ratan Kumar
Roll no. 22EC10067
Section-2
Description-problem-1*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,d,rev,diff;
    printf("Enter any n (n>=1) : ");
    scanf("%d",&n);

    if(n%2==0)
    {

        a=(n%10);
        b=((n%100)-(n%10))/10;
        c=((n%1000)-(n%100)-(n%10))/100;
        d=((n%10000)-(n%1000)-(n%100)-(n%10))/1000;
        rev= a*1000 + b*100 + c*10 + d*1 ;
        diff=rev-n;
        printf("Most significant digits to least significant digits:\n");
        printf("%d,%d,%d,%d",n/1000,n/100,n/10,n);
        printf("\n");
        printf("\n");
        printf("Reverse number = %d\n",rev);
        printf("Difference between Reverse and original number %d\n",diff);
        printf("%d",c);
    }
    else
    {
        a=(n%10);
        b=((n%100)-(n%10))/10;
        c=((n%1000)-(n%100)-(n%10))/100;
        d=((n%10000)-(n%1000)-(n%100)-(n%10))/1000;
        rev= a*1000 + b*100 + c*10 + d ;
        diff=rev-n;
        printf("Most significant digits to most significant digits:\n");
        printf("%d,%d,%d,%d",n,n/10,n/100,n/1000);
        printf("\n");
        printf("\n");
        printf("Reverse number = %d\n",rev);
        printf("Difference between Reverse and original number %d\n",diff);

    }



    return 0;
}
