/*
Section:2
Roll No:22CS30036
Name: Lakshya Agrawal
Question No: 02
Description:
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int n,digits=0,n2=0,n1,diff;
    printf("Enter the Integer: ");
    scanf("%d",&n);
    n1 = (n>0)? n:-n;

    if(n%2==0)
    {
     printf("\nMost significant digits to least significant digits:\n");
     int i=10;
     while(n/i!=0)
     {
         i*=10;
         digits++;
     }
     digits++;
     for(int j=0;j<digits;j++)
     {
         if(j!=digits-1)
         {
            printf("%d, ",(int)(n1/pow(10,digits-j-1)));
            n2+=(((int)(n/pow(10,digits-j-1))) %10)*(int)pow(10,j);
         }
         else
         {
            printf("%d",(int)(n1/pow(10,digits-j-1)));
            n2+=(((int)(n/pow(10,digits-j-1))) %10)*(int)pow(10,j);
         }
     }
    }else{
        printf("\nLeast significant digits to most significant digits:\n");
        int i=10;
     while(n/i!=0)
     {
         i*=10;
         digits++;
     }
     digits++;
     for(int j=0;j<digits;j++)
     {
         if(j!=digits-1)
         {
            printf("%d, ",n1%(int)(pow(10,digits-j)));
            n2+=(n%(int)(pow(10,digits-j)))/((int)pow(10,digits-j-1))*(int)pow(10,j);
         }
         else
         {
            printf("%d",n1%(int)(pow(10,digits-j)));
            n2+=(n%(int)(pow(10,digits-j)))/((int)pow(10,digits-j-1))*(int)pow(10,j);
         }
     }
    }

    printf("\n\nReverse number = %d",n2);
    diff = ((n-n2)>0)? (n-n2):(n2-n);
    printf("\nDifference between Reverse and original number = %d\n",diff);

    return 0;
}
