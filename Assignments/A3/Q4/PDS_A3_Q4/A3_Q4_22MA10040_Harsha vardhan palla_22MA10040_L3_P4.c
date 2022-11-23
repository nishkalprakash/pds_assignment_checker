/*section 14 Roll no:22MA10040 Name:P.Sri Harsha vardhan Assignment no:4 desc: Electricity bill*/
#include<stdio.h>
int main()
{
           int n;
          float bill;
          printf("Enter the no:of units:");
           scanf("%d",&n);
           if(n<=100)
          {  bill=n*0.5;
              printf("%f",bill);}
          else if(n>100&&n<=200)
        { bill=(n-100)*0.75+50;
          bill*=1.2;
          printf("%f",bill);}
         else if(n>200&&n<=300)
        {  bill=(n-200)*1.20+125+(1.2*bill);
           bill*=1.2;
          printf("%f",bill);}
         else
         {bill=(n-300)*1.50+245+(1.2*bill);
          bill*=1.2;
         printf("%f",bill);}
        return 0;
}


